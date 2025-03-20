//#include<iostream>
//#include<memory>
//
//class a {
//public:
//	a() {
//		std::cout << "constructor" << std::endl;
//	}
//	~a() {
//		std::cout << "destructor" << std::endl;
//	}
//	void name() {
//		std::cout << "class a ka destructor" << std::endl;
//	}
//};
//
//int main() {
//	// shared pointer creation
//	std::shared_ptr<a>sp1 = std::make_shared<a>();
//	std::cout << sp1.use_count() << std::endl;
//
//	std::shared_ptr<a>sp2 = sp1;
//	std::cout << "use count of sp1 is " << sp1.use_count()
//		<< "\n use count of sp2 is " << sp2.use_count() << std::endl;
//
//	sp2.reset();
//	std::cout << "use count of sp1 " << sp1.use_count() <<
//		"\n use count of sp2 is " << sp2.use_count() << std::endl;
//}