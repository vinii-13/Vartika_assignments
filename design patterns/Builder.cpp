//// Fix: Change the parameter type of all methods in the `resume` and `resumebuilder` classes to accept `const string&` instead of `string&`.  
//#include<iostream>  
//#include<string>  
//using namespace std;  
//
////project  
//class resume {  
//public:  
//   void addEducation(const string& edu) {  
//       education = edu;  
//   }  
//   void addExperience(const string& exp) {  
//       experience = exp;  
//   }  
//
//   void addProjects(const string& pro) {  
//       project = pro;  
//   }  
//
//   void addSkills(const string& skill) {  
//       this->skill = skill;  
//   }  
//
//   void addCertifications(const string& cert) {  
//       certificate = cert;  
//   }  
//
//   void show() {  
//       cout << "resume contains:- \nEducation: " << education << "\nExperience: " << experience << "\nProject: " << project << "\nskills: " << skill << "\ncertificates: " << certificate << endl;  
//   }  
//private:  
//   string education;  
//   string experience;  
//   string project;  
//   string skill;  
//   string certificate;  
//};  
//
//class resumebuilder {  
//   resume* r1;  
//public:  
//    resumebuilder() {
//        r1 = new resume();
//   }
//    ~resumebuilder() {
//        delete r1;
//    }
//   resumebuilder* addeducation(const string& edu) {  
//       r1->addEducation(edu);  
//       return this;  
//   }  
//   resumebuilder* addexperience(const string& exp) {  
//       r1->addExperience(exp);  
//       return this;  
//   }  
//   resumebuilder* addProjects(const string& pro) {  
//       r1->addProjects(pro);  
//       return this;  
//   }  
//
//   resumebuilder* addSkills(const string& skill) {  
//       r1->addSkills(skill);  
//       return this;  
//   }  
//
//   resumebuilder* addCertifications(const string& cert) {  
//       r1->addCertifications(cert);  
//       return this;  
//   }  
//
//   resumebuilder* buildresume() {  
//       return this;  
//   }  
//   resume* getresume() {  
//       return r1;  
//   }  
//};  
//
//int main() {  
//   // resume* newresume;
//   resumebuilder builder;  
//   resume* newresume = builder.addeducation("B.Tech CSE")->addexperience("6 months")->addProjects("python dashboard")  
//       ->addSkills("c++,python,oops")->addCertifications("ibm certified")->getresume();  
//
//   newresume->show();  
//   return 0;
//}

//#include<iostream>
//using namespace std;
//
//// pizza builder
////product
//class pizza {
//	string sauce;
//	string base;
//	string topping;
//
//public:
//	void getsauce(const string& s) {
//		sauce = s;
//	}
//	void getbase(const string& b) {
//		base = b;
//	}
//	void gettopping(const string& s) {
//		topping = s;
//	}
//	void show() {
//		cout << "base: " << base << " sauce: " << sauce << " topping: " << topping << endl;
//	}
//};
//
//class builder {
//	pizza* pizza1;
//public:
//	builder() {
//		pizza1 = new pizza();
//	}
//	~builder() {
//		delete pizza1;
//	}
//	builder* setbase(const string& s) {
//		pizza1->getbase(s);
//		return this;
//	}
//	builder* setsauce(const string& s) {
//		pizza1->getsauce(s);
//		return this;
//	}
//	builder* settopping(const string& s) {
//		pizza1->gettopping(s);
//		return this;
//	}
//	pizza* returnpizza() {
//		return pizza1;
//	}
//};
//
//int main() {
//	builder b1;
//	pizza* p1 = b1.setbase("wheat")->setsauce("red")->settopping("olives")->returnpizza();
//	p1->show();
//	return 0;
//}