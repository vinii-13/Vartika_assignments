#include<iostream>
using namespace std;

class animal {
public:
	virtual void sound() {
		cout << "animal sound" << endl;
	}
};

class cat : public animal {
public: 
	void sound() override{
		cout << "cat sound" << endl;
	}
};

int main() {
	animal* a;
	cat c;
	a = &c;
	a->sound(); // calls the function of child class.

	animal a1;
	cat* c1;
	c1 = &a1; // gives an error bcus child class object can't point to base class object



	return 0;

}