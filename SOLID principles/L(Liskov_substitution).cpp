//#include<iostream>
//using namespace std;
//
///*
//	definition: Derived or child classes must be substitutable for their base or parent classes
//	scenario:- 
//		some humans have job
//		some don't
//*/
//
//class humans {
//public:
//	virtual void work() {
//		cout << "we work" << endl;
//	}
//};
//
//class artist: public humans {
//public:
//	void work() override {
//		draw();
//	}
//	void draw() {
//		cout << "I draw" << endl;
//	}
//};
//
//class driver : public humans {
//public:
//	void work() override {
//		drive();
//	}
//	void drive() {
//		cout << "I drive" << endl;
//	}
//};
//
//int main() {
//	humans h;
//	h.work();
//	artist a;
//	driver d;
//	a.work();
//	d.work();
//
//	return 0;
//}