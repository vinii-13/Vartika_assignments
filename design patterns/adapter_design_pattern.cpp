////#include<iostream>
////using namespace std;
////
////// interface
////class ModernPaymentProcessor {
////public:
////	virtual void processPayment(double amount) const = 0;
////	virtual ~ModernPaymentProcessor() = default;
////};
////
//////legacy system with incompatable interface
////class LegacyPaymentSystem {
////public:
////	void makePayment(double amount, string currency) const{
////		cout << "Legacy system: Processing $" << amount << " in " << currency << "\n";
////	
////	}
////};
////
////class Adapter : public ModernPaymentProcessor {
////private:
////	LegacyPaymentSystem* s1;
////	string currency;
////public:
////	virtual ~Adapter(){}
////	Adapter(LegacyPaymentSystem* s, string c): s1(s), currency(c){}
////	
////	void processPayment(double amount) override {
////		s1->makePayment(amount, currency);
////	}
////};
//
//// case 2: indian charger to usa charger via adapter
//
//#include<iostream>
//using namespace std;
//
//class indiancharge {
//public:
//	void indcharge() {
//		cout << "charging with indian charger" << endl;
//	}
//};
//
//// target
//class usacharger {
//public:
//	virtual void usacharge() = 0;
//	virtual ~usacharger() = default;
//};
//
//// adapter
//
//class adapter : public usacharger {
//	indiancharge* charger1;
//public:
//	adapter(indiancharge* a): charger1(a){}
//	void usacharge() override {
//		charger1->indcharge();
//		cout << "adapter of usa charger" << endl;
//	}
//};
//
//int main() {
//	indiancharge c1;
//	usacharger* us1 = new adapter(&c1);
//	us1->usacharge();
//	//a.usacharge();
//	delete us1;
//	return 0;
//}
//
//// case -3 old camera with new sd card reader
//// issue/ source-> old camera with film rolls
//
//#include<iostream>
//using namespace std;
//
//class oldcamera {
//public:
//	void filmrolls() {
//		cout << "old camera film rolls\n";
//	}
//};
//
//// target
//class newcamera {
//public:
//	virtual void digitalSDcard() = 0;
//	virtual ~newcamera() = default;
//};
//
//class adapter : public newcamera {
//	oldcamera* c1;
//public:
//	adapter(oldcamera* c): c1(c){}
//
//	void digitalSDcard() override {
//		c1->filmrolls();
//		cout << "inside digitalSDcard" << endl;
//	}
//};
//
//int main() {
//	oldcamera camera2;
//	newcamera* c1 = new adapter(&camera2);
//	c1->digitalSDcard();
//	delete c1;
//}