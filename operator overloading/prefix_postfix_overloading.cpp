//#include<iostream>
//using namespace std;
//
//class a {
//	int x;
//public:
//	a(int y) {
//		x = y;
//	}
//	void display() {
//		cout << "x: " <<x<< endl;
//	}
//
//	// prefix operator overloading
//	a& operator--() {
//		x--;
//		return *this;
//	}
//
//	//post increment operator
//	a operator++(int y) // taking y to differentiate operators
//	{
//		a& temp = *this;
//		temp.x = x++;
//		return temp;
//
//	}
//};
//
//
//int main() {
//	a a1(12); a1.display();
//	--a1; a1.display();
//	--a1; a1.display();
//
//	a a2(1); a2.display();
//	  a2++.display();
//	--a2;  a2.display();
//	
//
//	int z = 12;
//	int* ptr = &z;
//	cout << "ptr: " << ptr << "  *ptr: " << *ptr << " &ptr: " << &ptr << endl;
//
//	return 0;
//}