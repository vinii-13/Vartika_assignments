#include<iostream>
using namespace std;

class a {
	int x;
protected:
	int y;
public:
	//a(){}
	a(int x = -1, int y = 1) : x(x), y(y){}
	void display() {
		cout << "x: " << x << "y: " << y << endl;
	}
};

class b : public a {
public:
	b(int x, int y) : a(x, y){}
	void disp() {
		cout << "protected member of a " << y << endl;
	}
};

int main(){
	a a1; 	
	b b1(12,13);
	b1.disp();
}