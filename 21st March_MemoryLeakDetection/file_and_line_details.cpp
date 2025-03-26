#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

struct AllocationInfo {
    void* ptr;
    size_t size;
    const char* file;
    int line;
};

std::map<void*, AllocationInfo> memoryMap;

void* operator new(size_t size, const char* file, int line) {
    void* ptr = malloc(size);
    memoryMap[ptr] = { ptr, size, file, line };
    return ptr;
}

void operator delete(void* ptr) noexcept {
    if (memoryMap.find(ptr) != memoryMap.end()) {
        auto& info = memoryMap[ptr];
        std::cout << "Leak detected!\n"
            << "  Size: " << info.size << " bytes\n"
            << "  Location: " << info.file << ":" << info.line << "\n";
        memoryMap.erase(ptr);
    }
    free(ptr);
}

// Macro to capture file and line
#define new new(__FILE__, __LINE__)

void checkLeaks() {
    for (const auto& entry : memoryMap) {
        const auto& info = entry.second;
        std::cout << "Memory leak at " << info.file << ":" << info.line
            << " (" << info.size << " bytes)\n";
    }
}

int main() {
    int* x = new int(42);  // Will be tracked
   // delete x;  // Uncomment to prevent leak
    checkLeaks();
    return 0;
}