//#include<iostream>
//#include<thread>
//#include<chrono>
//using namespace std;
//void print() {
//	for (int i = 0; i < 5; ++i) {
//		cout << "thread 1" << endl;
//	}
//	std::this_thread::sleep_for(chrono::seconds(3)); // thread sleep or waiting for 3 sec after its execution
//}
//int main() {
//	
//	std::thread t1(print);
//	cout << "inside main" << endl;
//	t1.join();
//
//	cout << "this will be printed after 3 seconds" << endl;
//	return 0;
//}