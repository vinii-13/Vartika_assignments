//// creates multiple objects under a factory
//// sports car and suv, having tyres, engine, brakes
//
//#include<iostream>
//#include<memory>
//#include<string>
//using namespace std;
//
//class tyre{
//public:
//	virtual ~tyre() = default;
//	virtual void info() = 0;
//};
//class suvtyre: public tyre{
//public:
//	void info() override {
//		cout << "suv tyres added" << endl;
//	}
//};
//class sportstyre: public tyre{
//public:
//	void info() override {
//		cout << "sports tyres added" << endl;
//	}
//};
//
//class engine{
//public:
//	virtual ~engine() = default;
//	virtual void info() = 0;
//};
//class suvengine: public engine{
//public:
//	void info() override {
//		cout << "suv engine added" << endl;
//	}
//};
//class sportsengine : public engine{
//public:
//	void info() override {
//		cout << "sports engine added" << endl;
//	}
//};
//
//class brake{
//public:
//	virtual ~brake() = default;
//	virtual void info() = 0;
//};
//class suvbrake: public brake{
//public:
//	void info() override {
//		cout << "suv brakes added" << endl;
//	}
//};
//class sportsbrake: public brake{
//public:
//	void info() override {
//		cout << "sports breaks added" << endl;
//	}
//};
//
//class carfactory{
//public:
//	virtual ~carfactory() = default;
//	virtual unique_ptr<tyre> gettyre() = 0;
//	virtual unique_ptr<engine> getengine() = 0;
//	virtual unique_ptr<brake> getbrake() = 0;
//	virtual void carinfo() = 0;
//};
//
//class suvfactory: public carfactory{
//public:
//
//	unique_ptr<tyre> gettyre() override{
//		return make_unique<suvtyre> ();
//	}
//	unique_ptr<engine> getengine() override {
//		return make_unique<suvengine>();
//	}
//	unique_ptr<brake> getbrake() override {
//		return make_unique<suvbrake>();
//	}
//	void carinfo() override {
//		cout << "suv manufacturing complete" << endl;
//	}
//};
//class sportsfactory: public carfactory{
//public:
//
//	unique_ptr<tyre> gettyre() override {
//		return make_unique<sportstyre>();
//	}
//	unique_ptr<engine> getengine() override {
//		return make_unique<sportsengine>();
//	}
//	unique_ptr<brake> getbrake() override {
//		return make_unique<sportsbrake>();
//	}
//	void carinfo() override {
//		cout << "sports car manufacturing complete" << endl;
//
//	}
//};
//
//// client code
//class carfactorybuilder{
//	unique_ptr<carfactory>cf;
//public:
//	void buildfactory(string& s) {
//		if (s == "suv") {
//			cf = make_unique<suvfactory>();
//		}
//		else if (s == "sports car") {
//			cf = make_unique<sportsfactory>();
//		}
//		else {
//			cf = nullptr;
//		}
//		
//	}
//
//	void buildcar() {
//		if (cf) {
//			cf->gettyre()->info();
//			cf->getengine()->info();
//			cf->getbrake()->info();
//			cf->carinfo();
//		}
//		else {
//			cout << "invalid fact" << endl;
//		}
//	}
//
//};
//int main() {
//	carfactorybuilder factory;
//	string s = "suv";
//	factory.buildfactory(s);
//	factory.buildcar();
//	return 0;
//}