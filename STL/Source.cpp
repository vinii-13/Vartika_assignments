//#include<iostream>
//using namespace std;
//
////book = 10, latefee = 15/day
//class checkout {
//public:
//	virtual void totalamount(const int days) = 0;
//	virtual void latefee(const int days) = 0;
//};
//
//class details {
//public:
//	string title;
//	int id;
//	int price;
//	virtual void property() = 0;
//	virtual void getdetails() = 0;
//
//	void displayitems() {
//		cout << "1.book\n2.cd\n3.dvd" << endl;
//	}
//};
//
//class book : public details, public checkout {
//	string author;
//public:
//
//	book(string name, int id, string author, int val) {
//		this->title = name;
//		this->id = id;
//		this->author = author;
//		this->price = val;
//	}
//	void property() override {
//		cout << "property is author: " << author << endl;
//	}
//	void getdetails() override {
//		cout << "name: " << this->title << endl;
//		cout << "id: " << this->id << endl;
//		cout << "author: " << this->author << endl;
//	}
//	void totalamount(int d) override {
//		cout << "total amount for books: " << d * 10 << endl;
//	}
//	void latefee(int d)override {
//		cout << "late fee: " << d * 15 << endl;
//	}
//};
//class cd : public details , public checkout {
//	string singer;
//public:
//
//	cd(string name, int id, string author, int v) {
//		this->title = name;
//		this->id = id;
//		this->singer = author;
//		this->price = v;
//
//	}
//	void property() override {
//		cout << "property is : " << singer << endl;
//	}
//	void getdetails() override{
//		cout << "name: " <<this->title<< endl;
//		cout << "id: " << this->id << endl;
//		cout << "singer: " << this->singer << endl;
//	}
//	void totalamount(int d) override {
//		cout << "total amount for cd: " << d * 10 << endl;
//	}
//	void latefee(int d)override {
//		cout << "late fee: " << d * 15 << endl;
//	}
//};
//class dvd: public details , public checkout {
//	string player;
//public:
//
//	dvd(string name, int id, string author, int v) {
//		this->title = name;
//		this->id = id;
//		this->player = author;
//		this->price = v;
//
//	}
//	void property() override {
//		cout << "property is author: " << player << endl;
//	}
//	void getdetails() override {
//		cout << "name: " << this->title << endl;
//		cout << "id: " << this->id << endl;
//		cout << "player: " << this->player << endl;
//	}
//	void totalamount(int d) override {
//		cout << "total amount for dvd: " << d * 10 << endl;
//	}
//	void latefee(int d)override {
//		cout << "late fee: " << d * 15 << endl;
//	}
//};
//int main() {
//	book b1("b1",1, "abc", 10);
//	b1.displayitems(); b1.property(); b1.getdetails(); b1.totalamount(4); b1.latefee(2);
//	return 0;
//}