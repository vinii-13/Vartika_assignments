//#include<iostream>
//#include<unordered_map>
//#include<string>
//#include<memory>
//using namespace std;
//
//// scenario: electronics catalogue
//class prototype {
//public:
//	virtual void print() const = 0;
//	virtual unique_ptr<prototype> clone() const = 0;
//
//	virtual ~prototype() = default;
//};
//
//class laptop : public prototype
//{
//	string name;
//	int pid;
//public:
//	laptop(): name("Dell Inspirion"), pid(1011){}
//
//	void print() const override  {
//		cout << "laptop company: " << name << " , pid: " << pid << endl;
//	}
//
//	unique_ptr<prototype> clone() const override{
//		return make_unique<laptop>(*this);
//	}
//};
//
//class phone : public prototype{
//private:
//	string name;
//	int pid;
//public:
//	phone() : name("samsung"), pid(1034) {}
//
//	void print() const override {
//		cout << "mobile company: " << name << " , pid: " << pid << endl;
//	}
//
//	unique_ptr<prototype> clone() const override {
//		return make_unique<phone>(*this);
//	}
//};
//
//// registry to keep count
//class registry {
//	unordered_map<std::string, unique_ptr<prototype> >map;
//public: 
//    registry() {
//		
//		map["laptop"] = make_unique<laptop>();  
//		map["phone"] = make_unique<phone>();
//    }  
//	
//	// fn to clone
//	unique_ptr<prototype> clone(string& s) {
//		if (map.find(s) == map.end()) {
//			return nullptr;
//			
//		}
//		return map[s]->clone();
//		
//	}
//};
//
//int main() {
//	//unordered_map< std::string, unique_ptr<prototype>>reg;
//	registry r; 
//	string s = "laptop";
//	auto l1 = r.clone(s);
//	if (l1) {
//		l1->print();
//	}
//	else {
//		cout<<"enter a valid choice" << endl;
//	}
//	
//	return 0;
//}
//
////#include<iostream>
////using namespace std;
////
////class a {
////	int b;
////public:
////	a(): b(10){}
////	virtual void speak() {
////		cout << "speaking\n";
////	}
////};
////
////class b : public a {
////public:
////	void speak() final {
////		cout << "not\n";
////	}
////};
////class c : public a {
////public:
////	void speak() override() {
////
////	}
////};
////int main() {
////	a* a1 = new b();
////	a1->speak();
////	
////
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//class a {
//private:
//	static const char b = 'c';
//	static constexpr char c = 'd';
//	
//};
//void fun() {
//	class test {
//	public:
//		static void a();
//	};
//}
//int a::b = 1;