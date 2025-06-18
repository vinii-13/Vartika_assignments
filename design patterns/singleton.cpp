//#include<iostream>
//#include<vector>
//using namespace std;
//
//class singleton {
//private:
//	vector<int>v;
//	singleton() {
//		cout << "inside constructor" << endl;
//	}
//	singleton(const singleton& ob) = delete;
//	singleton& operator=(const singleton& ob) = delete;
//public:
//	static singleton& getinstance() {
//		static singleton object;
//		return object;
//	}
//	void work() {
//		cout << "anything" << endl;
//	}
//	void addval(int val) {
//		v.emplace_back(val);
//	}
//	void pr() {
//		for (int i : v) {
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//};
//
//int main() {
//	singleton& obj = singleton::getinstance();
//	singleton& b = singleton::getinstance();
//	cout << "add. of obj: " << &obj << endl;
//	cout << "add. of b: " << &b << endl;
//	obj.addval(12);
//	b.addval(10);
//	obj.pr();
//	b.pr();
//	//singleton& c = move(b); why is move constructor inaccessible 
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//// thread safe singleton
//class singleton{
//	static singleton* instance;
//	singleton() { cout << "constructor called" << endl; }
//public:
//	// delete copy semantics
//	singleton(const singleton& s) = delete;
//	singleton& operator=(const singleton& o) = delete;
//
//	static singleton* getinstance() {
//		if (!instance) {
//			instance = new singleton();
//		}
//		return instance;
//	}
//};
//int main() {
//	singleton* obj = singleton::getinstance();
//
//	return 0;
//}