#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <iostream>

static int i = 0;
class a {
private:
    char* b;
    
   
public:
    a() { 
        // allocating memory dynamically
        b = new char('b'); 
        std::cout << "I am object " << ++i << std::endl;
    }
};

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    a* obj1 = new a();    
    a* obj2 = new a();    
    _CrtDumpMemoryLeaks();  

    return 0;
}