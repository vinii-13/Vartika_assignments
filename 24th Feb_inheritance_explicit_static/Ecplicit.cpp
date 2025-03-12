#include<iostream>
#include<string>
using namespace std;

class person {
private:
	string name;
	int age;
public: 
    explicit person(){
		cout << "default const" << endl;
	}
	explicit person(string name, int age = -1) {
		this->name = name;
		this->age = age;
	}

	// explicit copy constructor
	explicit person(person& p1) : name(p1.name), age(p1.age) {}
};
int main() {

	//person p1 = (string)"abc"; // only 1 type cast is allowed for compiler, hence we need to manually cast it to string
	person p("junior", 13);

	return 0;
}