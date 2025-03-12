//#include<iostream>
//#include<string>
//
// function template
//template <typename A>
//A concatenatee(A a, A b) {
//	return a + b;
//}
//
// class template
//template <typename B>
//class box {
//	B val;
//public:
//	box(B v) : val(v){}
//
//	void dis() {
//		std::cout << val << std::endl;
//	}
//};
//
// specialized function template
//using namespace std;
//template <>
//void prt<string>(string value) {  // Correct specialization
//	cout << "String Specialization: " << value << endl;
//}
//
//
//int main() {
//	std::cout << concatenatee(1,2)<<std::endl;
//	std::cout << concatenatee(std::string("hello "), std::string("world"));
//
//	box<int> b1(2);
//	b1.dis();
//
//	box<std::string>b2("hi");
//	b2.dis();
//
//	ptr("hi");
//	return 0;
//}