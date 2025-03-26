// another way to detect memory leak
#include<iostream>
#include<map>

std::map<void* , size_t>memorymap;
// overload new
void* operator new(size_t var) {
	void* ptr = malloc(var);
	memorymap[ptr] = var;
	return ptr; // since new is supposed to return a pointer to the newly allocated memory
}

// overloading delete
void operator delete(void* ptr) noexcept { // void bcus it returns nothing
	if (memorymap.find(ptr) != memorymap.end()) {
		memorymap.erase(ptr); //if found in map, then delete
	}
	else {
		std::cout << "trying to delete something which is already deleted" << std::endl;
	}
	free(ptr); //to free memory in real time 
}

void detectleak() {
	if (!memorymap.empty()) {
		std::cout << "memory leak detected" << std::endl;
	}
}
int main() {
	int* a = new int(2);
	char* c = new char('c');

	delete a;
	detectleak();

	return 0;
}