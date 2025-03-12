#include<iostream>
using namespace std;

class a {
	int x, y;
public: 
	a(int arg1, int arg2) : x(arg1), y(arg2){}

	void displayPrivate() {
		cout << x <<" "<< y << endl;
	}
	friend void displayPrivate2(a a1); // friend function
	friend class b;
};

void displayPrivate2(a a1) {
	// used friend keyword so that this function could access private members of a class
	cout << "friend function here" << endl;
	cout << a1.x << " " << a1.y << endl;
}

class b {
	// to allow this class to access the private members of class a, declare it a friend
public:
	static void bdisplaya(a a1) {
		cout << "friend class function" << endl;
		cout << a1.x << " " << a1.y << endl;
	}
};

int main() {
	a a1(23,41);
	a1.displayPrivate(); // function inside class can access private data members
	displayPrivate2(a1);

	b::bdisplaya(a1);
	return 0;
}