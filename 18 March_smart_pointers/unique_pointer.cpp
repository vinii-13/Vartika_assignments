#include<iostream>
#include<string>

class Name {
	std::string name = "me";
public:
	// constructor
	Name() {
		std::cout << "inside constructor" << std::endl;
	}
	~Name() {
		std::cout << "in destructor" << std::endl;
	}
	void func() {
		std::cout << "name is " << name << std::endl;
	}
};
int main() {
	// unique smart pointer
	std::unique_ptr<Name>obj1 = std::make_unique<Name>(); 
	// allocating memory dynamically using make_unique<>()

	obj1->func();

	/*
		// trying to copy it into a new obj will cause errors
	using namespace std;
	unique_ptr<Name>o2 = obj1;
	*/

	// to transfer ownership, use move constructor;
	std::unique_ptr<Name>o2 = std::move(obj1);
	//obj1->func();
	o2->func();
	std::cout<<o2.get()<<std::endl;
	std::unique_ptr<int>i1(new int(12));
	std::cout << *i1 << std::endl;
	std::cout << *i1.get() << std::endl;
	return 0;
}
// total constructor call = 1
// destructor call = 1