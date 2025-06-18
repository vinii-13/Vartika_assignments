//#include<iostream>
//#include<string>
//
//using namespace std;
//// scenario - vehicle factory
//class vehicle { // vehicle car = new car();
//public:
//	virtual ~vehicle() = default;
//	virtual void make() = 0;
//};
//
//class car: public vehicle {
//public:
//	void make() override {
//		cout << "making a car with 4 wheels, 1 mirror" << endl;
//	}
//};
//class bike: public vehicle {
//	void make() override {
//		cout << "making a bike with 2 wheels, 2 mirror" << endl;
//	}
//};
//class truck : public vehicle {
//	void make() override {
//		cout << "making a truck with 6 wheels, 3 mirror" << endl;
//	}
//};
//
//class vehiclefactory {
//public:
//	virtual unique_ptr<vehicle> getvehicle() = 0; //vehicle* getvehicle()= 0;
//	virtual ~vehiclefactory() = default;
//};
//
//class bikefactory: public vehiclefactory {
//public:
//	unique_ptr<vehicle> getvehicle() override {
//		return make_unique<bike>();
//	}
//};
//class carfactory : public vehiclefactory {
//public:
//	unique_ptr<vehicle> getvehicle() override {
//		return make_unique<car>();
//	}
//};
//class truckfactory : public vehiclefactory {
//public:
//	unique_ptr<vehicle> getvehicle() override {
//		return make_unique<truck>();
//	}
//};
//
////	ALTERNATE CODE
////class vehiclefact {
////	public:
////		unique_ptr<vehicle> getvehicle(string& s) {
////			if (s == "car") {
////				return make_unique<car>();
////			}
////			if (s == "bike") {
////				return make_unique<bike>();
////			}
////			if (s == "truck") {
////				return make_unique<truck>();
////			}
////			return nullptr;
////		}
////};
//
//int main() {
//	unique_ptr<vehiclefactory> factory1 = make_unique<carfactory>();
//	auto car1 = factory1->getvehicle();
//	car1->make();
//	return 0;
//
//}
///*
//step 1-> product ki abstract class bnao
//step 2-> factory ki abstract class bnao
//
//step-3> product ki classes banao
//step 4-> product specific factories ki class bnao
//
//main me factory banao, factory se product ka ptr lelo.
//*/