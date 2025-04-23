/* scenario:-
*		Book shop contains books
*		book has details
*		we can purchase multiple books
*		we can also add or remove books from the bookshop
*		
*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

// handles the logic to add or remove book in a bookstore
class bookinventory {
	vector<string>book;

public:
	
	void addbook(const string& name){
		auto it = std::find(book.begin(), book.end(), name);
		if (it != book.end()) {
			cout << "book already exists" << endl;
		}
		else {
			book.push_back(name);
			cout << "book added" << endl;
		}
	}
	void remove(const string& name){
		auto it = std::find(book.begin(), book.end(), name);
		if (it != book.end()) {
			book.erase(it); //erase at position it
			cout << "book removed" << endl;
		}
		else {
			cout << "book does not exist" << endl;
		}
	}
	vector<string> booklist() {
		return book;
	}

};

// handles bookstore creation logic
class bookstore {
	string name;
	bookinventory bi;
public:
	bookstore(const string& s){
		name = s;
	}

	string& storename() {
		return name;
	}
	bookinventory& bookname() {
		return bi;
	}

};
 
// handles the logic to print store details 
class storedetails {
public:
	void display(bookstore& b) {
		cout << "store name: " << b.storename() << endl;
		cout << "book list:- " << endl;
		for (auto it : b.bookname().booklist()) {
			cout << "* "<< it << endl;
		}
	}
};

int main() {

	bookstore b("store_1");
	b.bookname().addbook("a");
	b.bookname().addbook("b");
	b.bookname().addbook("c");
	b.bookname().addbook("d");

	b.bookname().remove("a");
	b.bookname().remove("e");

	storedetails d1;
	d1.display(b);

	return 0;
}
