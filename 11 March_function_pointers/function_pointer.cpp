//#include<iostream>
////using namespace std;
//
//class a {
//public:
//	void say() {
//		std::cout << "saying inside class " << std::endl;
//	}
//};
//
//void green() {
//	std::cout << "color" << std::endl;
//}
//int sum(int a, int b) {
//	return a + b;
//}
//void summ() {
//	std::cout << "sum here" << std::endl;
//}
//// array of function pointer
//int main() {
//	void (*ptr)() = green; //& is optional
//	ptr();
//
//	int (*p1)(int ,int ) = &sum;
//	std::cout<<p1(2, 3)<<std::endl;
//
//	void (*p2[])() = {green, summ};
//	p2[0]();
//	p2[1]();
//
//	// pointer to a membr function
//	void (a:: * p3)() = &a::say;
//	a a1;
//	(a1.*p3)();
//	return 0;
//}
///*
//Q. Why is & Optional When Assigning a Function Pointer?
//Ans. In C++, when assigning a function pointer, the ampersand (&) is optional because of 
//	implicit function-to-pointer decay. This means that when you use a function name without 
//	parentheses, the compiler automatically treats it as a pointer to the function.
//
//Function names (without () parentheses) automatically decay into function pointers.
//The function greet is converted into a pointer to itself.	->LINE 22 
//*/