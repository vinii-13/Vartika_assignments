//#include<iostream>
//#include<vector>
//using namespace std;
//
//// subject // observer
//class observer {
//public:
//	virtual void notify(float temp) = 0;
//	virtual ~observer() = default;
//
//};
//
//class subject {
//public:
//	virtual ~subject() = default;
//	virtual void addobs(observer* o) = 0;
//	virtual void removeobs(observer* o) = 0;
//	virtual void update() = 0;
//
//};
//
//class weatherstation:public subject {
//	vector<observer*>v;
//	float temp;
//public:
//	void addobs(observer* o) override {
//		v.push_back(o);
//	}
//	void removeobs(observer* o) override {
//		v.erase(remove(v.begin(), v.end(), o), v.end());
//	}
//	void settemp(float t) {
//		temp = t;
//		update();
//	}
//	void update() override {
//		for (auto i : v) {
//			i->notify(temp);
//		}
//	}
//};
//
//class display: public observer{
//public:
//	void notify(float t) override {
//		cout << "temp is now: " << t;
//	}
//};
//int main() {
//	weatherstation w;
//	display d1;
//	display d2;
//	w.addobs(&d1);
//	w.addobs(&d2);
//	w.settemp(12.2);
//	return 0;
//
//}
//
//#include<memory>
//#include<iostream>
//using namespace std;
//
//class prototype {
//public:
//	virtual unique_ptr<prototype> clone() = 0;
//	virtual void show() = 0;
//};
//
//class laptop: public prototype {
//	int id;
//	string name;
//public:
//	laptop(int i, const string& n): id(i), name(n){}
//	laptop(const laptop& l): id(l.id), name(l.name){}
//	void show() override {
//		cout << "id: " << id << " name: " << name << endl;
//	}
//	unique_ptr<prototype> clone() override {
//		return make_unique<laptop>(*this);
//	}
//};
//int main() {
//	laptop l1(12, "dell");
//	auto l2 = l1.clone();
//	l1.show();
//	l2->show();
//	return 0;
//}