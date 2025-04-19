//#include<iostream>
//#include<mutex>
//using namespace std;
//std::mutex m;
//int currbalance = 0;
//
//void addmoney(int amt) {
//	m.lock();
//	currbalance += amt;
//	cout << "balance has been updated: " <<currbalance<< endl;
//	m.unlock();
//}
//
//int main() {
//	cout << "balance: " << currbalance << endl;
//
//	thread t1(addmoney, 12);
//	thread t2(addmoney, 13);
//	t1.join();
//	t2.join();
//
//	cout << "balance: " << currbalance << endl;
//	return 0;
//}