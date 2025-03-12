//#include<iostream>
//using namespace std;
//
//class a {
//public:
//	a() {
//		cout << "constructor" << endl;
//	}
//	~a() {
//		cout << "destructor" << endl;
//	}
//};
//void fun() {
//	a a1;
//	throw runtime_error("exception");
//}
//
//int main() {
//	try {
//		fun();
//	}
//	catch (exception& e) {
//		cout << e.what() << endl;
//	}
//	return 0;
//}