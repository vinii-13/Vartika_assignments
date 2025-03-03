#include<iostream>
using namespace std;

class ab {
	string c;
	string* ptr;
public:
	ab() {
		c = 'c';
		ptr = new string("");
	}
	// copy constructor
	ab(const ab& ab1) {
		c = ab1.c;
		ptr = new string(*ab1.ptr);
	}
	// parameterized const
	ab(string c1, string ptr1) {
		this->c = c1;
		this->ptr = new string(ptr1);
	}
	void display() {
		cout << "c: " << c << "  *ptr: " << *ptr <<"  &ptr: "<<&ptr << endl;
	}
	~ab(){
		delete ptr;
	}
};

int main() {
	ab a1("vartika", "sharma");
	a1.display();

	ab a2(a1);
	a2.display();
	return 0;
}
