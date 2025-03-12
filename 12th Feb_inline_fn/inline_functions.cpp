#include<iostream>
using namespace std;

inline int sum(int a, int b) { return a + b; }
// it mostly depends on the compiler to consider a function inline or not.
// complex functions can't be made inline since they might bloat the code.

class polygon {
	int l, b;
public:
	polygon(int l, int b) {
		this->l = l;
		this->b = b;
	}
	inline void setlength(int h) {
		l = h;
	}
	inline void getlength() {
		cout << "l: " << l << endl;
	}
	inline void setb(int h) {
		b = h;
	}
	inline void getb() {
		cout << "b: " << b << endl;
	}
	inline void prod() {
		cout << "prod: "<<l * b << endl;
	}
};
// when defined inside class, inline functions are automatically considered inline, the decision is
// no more with the compiler.

// inline functions can be nested
inline int mult(int a, int b) {
	int s = sum(a, b);
	return s * 10;
}

int main() {

	cout << sum(2, 3)<<endl;
	polygon a(12,10);
	a.getlength();
	a.getb();
	a.prod();

	return 0;
}