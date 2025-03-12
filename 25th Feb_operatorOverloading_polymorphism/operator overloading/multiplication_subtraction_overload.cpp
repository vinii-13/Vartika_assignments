//#include<iostream>
//using namespace std;
//
//class a {
//	int x;
//	int y;
//public:
//	a(int c, int d) {
//		x = c;
//		y = d;
//	}
//
//	// subtraction operator overloading
//	a operator-(const a& a1) {
//		int nx = x - a1.x;
//		int ny = y - a1.y;
//		a t(nx, ny);
//		return t;
//	}
//
//	// multiply operator overload
//	a operator*(const a& a1) {
//		int nx = this->x * a1.x;
//		int ny = this->y * a1.y;
//		a temp(nx, ny);
//		return temp;
//	}
//	
//	void display() {
//		cout << "x: " << x << "	y: " << y << endl;
//	}
//};
//
//int main(){
//	a a1(1, 2);
//	a a2(2, 3);
//	a a3 = a1 * a2;
//	a1.display(); a2.display(); a3.display();
//	a a4 = a1 - a2;
//	a4.display();
//
//	return 0;
//}