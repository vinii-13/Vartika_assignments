//#include<iostream>
//#include<thread>
//using namespace std;
//
//// using function pointer
//void print(int val) {
//	cout << "function ptr" << endl;
//	for (int i = 1; i <= val; ++i) {
//		cout << i << " ";
//	}
//	cout << endl;
//}
//
///*
//void fun(int x) {
//	while (x > 0) {
//		cout << x << " ";
//		--x;
//	}
//	cout << endl;
//}
//*/
//
//// using functors, static and non-static member function
//class b {
//public:
//	void operator()(int x) { // functor
//		cout << "inside functor" << endl;
//	}
//	static void printval(int v){ // static member function
//		cout << "inside static function " << v << endl;
//	}
//	void val(int v){ //non static member function
//		cout << "inside static function " << v << endl;
//	}
//};
//
//int main() {
//	std::thread t1(print, 3); //function pointer
//	thread t2([](int x){ // lambda function
//		cout << "lambda" << endl;
//		while (x-- > 0) {
//			cout << x << " ";
//		}
//		cout << endl;
//	}, 3);
//	std::thread t3(b(), 3); // functor
//	std::thread t4(&b::printval, 12);
//	b v;
//	std::thread t5(&b::val, std::ref(v), 10);
//
//	t1.join();
//	t2.join();
//	t3.join();
//	t4.join(); t5.join();
//	return 0;
//}