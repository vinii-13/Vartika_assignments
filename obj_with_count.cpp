#include<iostream>
using namespace std;
class a {
	static int b;
public:

	a() {
		//static int b = 1;
		cout << b << endl;
		b++;

	}
};
int a::b = 1;

//int main() {
//	a a1 = a();
//	a a2[5];
//	return 0;
//}