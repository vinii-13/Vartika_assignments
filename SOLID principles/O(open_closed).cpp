///*
//	scenario:-
//	there are differnt types of vehicles, each vehicle has different number of tyres
//*/
//#include<iostream>
//using namespace std;
//
//class Vehicle {
//public:
//	virtual void tyres() = 0;
//	virtual void name() = 0;
//	virtual ~Vehicle() {};
//};
//
//class Bike : public Vehicle {
//	string n;
//public:
//	Bike(const string& n) {
//		this->n = n;
//	}
//	void tyres() override {
//		cout << "no. of tyres = 2" << endl;
//	}
//	void name() override {
//		cout << "name: " <<n<< endl;
//	}
//};
//
//class Car : public Vehicle {
//	string namee;
//public:
//	Car(const string& namee) {
//		this->namee = namee;
//	}
//	void tyres() override {
//		cout << "no. of tyres = 4" << endl;
//	}
//	void name() override {
//		cout << "name: " << namee << endl;
//	}
//};
//
//// now we can extend this logic for multiple vehicles
//
//int main() {
//	Bike b("bike");
//	b.name();
//	b.tyres();
//	Car c("car");
//	c.name();
//	c.tyres();
//
//	return 0;
//}