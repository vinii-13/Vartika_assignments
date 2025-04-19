//#include<iostream>
//#include<thread>
//#include<chrono> // Include this header for high_resolution_clock
//
//typedef unsigned long long ull;
//using namespace std;
//using namespace std::chrono; // Add this line to use high_resolution_clock
//
//ull odd, even;
//void findodd(ull start, ull end) {
//	for (auto i = start; i <= end; ++i) {
//		if ((i&1) == 1) {
//			odd++;
//		}
//	}
//	cout << "oddsum: " << odd << endl;
//}
//void findeven(ull start, ull end) {
//	for (auto i = start; i <= end; ++i) {
//		if ((i & 1) == 0) {
//			even++;
//		}
//	}
//	cout << "evensum: " << odd << endl;
//}
//
//int main() {
//	auto starttime = high_resolution_clock::now();
//	findodd(0, 1900000000);
//	findeven(0, 1900000000);
//	//thread t1(findodd, 0, 1900000000);
//	//thread t2(findeven, 0, 1900000000);
//	//t1.join();
//	//t2.join();
//	auto endtime = high_resolution_clock::now();
//	auto duration = duration_cast<microseconds>(endtime - starttime);
//	cout << "sec: " << duration.count()/1000000 << endl;// without thread gives 4 sec approx
//
//	return 0;
//}
//// join is used to join other threads to the main thread bcus if we dont do that, after
//// the main function ends, there is no way to get output from these threads.