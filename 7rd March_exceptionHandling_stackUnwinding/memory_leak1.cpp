//#include<iostream>
//using namespace std;
//
//class a {
//	int* p;
//public:
//	a() {
//		p = new int(2); //memory leak
//		cout << "inside constructor" << endl;
//		throw runtime_error("exception"); 
//	// exception inside contructor will prevent the constructor body to execute completely
//	// but the object would still be created and not be registered for destructor call.
//		cout << "after exception" << endl;
//	}
//	~a() {
//		delete p;
//		cout << "Destructor" << endl;
//	}
//};
//void fun() {
//	a a1;
//	cout << "in function" << endl;
//}
//int main() {
//	try {
//		fun();
//	}
//	catch (exception& e) {
//		cout << e.what() << endl;
//	}
//
//	return 0;
//
//}
