#include<iostream>
using namespace std;
class a {
	int x;
	string* ptr;
public:
	a() {
		x = 0;
		ptr = new string("");
	}
	a(int x, string s) {
		this->x = x;
		ptr = new string(s);
	}

	// assignment operator overloading
	a& operator=(const a& a1) {
		if (this == &a1) {
			return *this;
		}
		delete ptr;

		x = a1.x;
		ptr = new string(*(a1.ptr));
		return *this; // to allow chaining
	}

	void display() {
		cout << "x: " << x << "  ptr: " << ptr << endl;
	}

	~a() {
		delete ptr;
	}

};
int main() {
	a a1(2, "hii"); a1.display();
	a b(1, "hey"); b.display();
	a c(12, "cat"); c.display();

	a1 = b = c;
	a1.display();
	b.display();
	c.display();

	return 0;
}