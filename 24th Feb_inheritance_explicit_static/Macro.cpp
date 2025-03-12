#include<iostream>
using namespace std;
// Macros are replaced by their values or code before runtime, 
// so they don’t consume memory and don’t have an execution time overhead. 
// They are purely text replacements. 
#define a 12
#define sum( a, b) (a+b)

int main() {
	cout << a << endl;
	cout << sum(4, 3) << endl;
	return 0;
}
