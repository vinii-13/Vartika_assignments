#include<iostream>
using namespace std;


template<typename t, typename... arg>
void show(t t1, arg... a1, t t2) {

	cout << t1 << endl;
	cout << a1 << endl;
	//cout << t2 << endl;
	cout << t1 << endl;
}

// above code won't work bcus compiler doesn't know where t2 begins.
// variadic args should be placed in the end.

void show() {
	cout << "end of args" << endl;
}

template<typename t, typename... arg>
void show(t t1, arg... a1) {

	cout << t1 << endl;
	show(a1...);
}

// recursion
void print(){} // base case

template<typename t, typename... args>
void print(t t1, args... a) {
	cout << t1<<" ";
	print(a...);
}

int main() {
	show(1, "dfg", 'ccc', 23.2, 2);
	cout << endl;


	return 0;
}