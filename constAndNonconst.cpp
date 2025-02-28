#include<iostream>
using namespace std;

void printConst(const int n){
	
	cout << "value is " << n << endl;
}

void printNonConst(int& n){
	n += 1;
	cout << "value of non const is " << n << endl;
}

//int main(){
//	int m = 12;
//	const int j = 13;
//
//	printConst(m);
//	printNonConst(m);
//
//	printConst(j);
//	printNonConst(j);
//	cout << "j: " << j << endl;
//
//
//
//
//}