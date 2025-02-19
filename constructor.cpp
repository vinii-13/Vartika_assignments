#include<iostream>
using namespace std;

class a {
	int b;
	int c;
	string d;

public:
	a(){
		cout << "default constructor is called." << endl;
	}
	a(int m, int n){
		b = m;
		c = n;
		cout << "parametarized constructor is called" << endl;
	}

	void print() {
		cout << "b: " << b << endl;
		cout << "c: " << c << endl;	
	}

	~a() {
		cout << "destructor is called" << endl;

	}
};

int main() {
	a a1;
	a a2(2, 3);
	a* a3 = new a();
	return 0;
}