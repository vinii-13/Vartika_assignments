//#include<iostream>
//#include<memory>
//#include<vector>
//
//using namespace std;
//
//class myclass {
//	int data;
//	size_t size;
//public:
//	myclass(int d, size_t s): data(d), size(s){} // parameterized constructor
//
//	// move constructor
//	myclass(myclass&& obj) noexcept// passing r value reference
//	{
//		this->data = obj.data;
//		this->size = size;
//		obj.data = 0; //delete data
//		obj.size = 0;
//	}
//
//	//move operator
//	myclass& operator=(myclass&& object) noexcept
//	{
//		if (this != &object) {
//			delete[] this;
//			this->data = object.data;
//			object.data = 0;
//			this->size = object.size;
//			object.size = 0;
//		}
//		return *this;
//	}
//};
//int main() {
//	myclass a(12, 1);
//	myclass b(move(a)); // move constructor called
//
//	vector<int>v, c;
//	v = { 1,2,3,4,5 };
//	c = move(v);
//	int z = 000000123; //converts the number to octal form
//	cout << z; // prints octal equivalent = 83
//	return 0;
//}