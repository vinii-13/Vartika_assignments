#include<iostream>
#include<string>
using namespace std;

class a {
private:
	string name;
	int age;

public:
	a(string s,int age): name(){
		name = s;
		this->age = age;
	}
	void display(){
		cout << name << endl << age << endl;
	}
};

//int main() {
//	a a1[3] = {a("joy",12), a("ray", 11), a("toy", 34)};
//	for (int i = 0; i < 3; i++) {
//		a1[i].display();
//		cout << endl;
//	}
//	return 0;
//}