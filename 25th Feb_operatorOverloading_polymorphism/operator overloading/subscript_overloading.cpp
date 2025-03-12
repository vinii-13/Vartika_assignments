#include<iostream>
using namespace std;

class a {
	int arr[5];
	
public:

	int& operator[](int x){
		if ((x >= 0) and (x < 5)) {
			return arr[x];
		}
		else {
			cout << "array index out of bound" << endl;
		}
	}
	void display() {
		for (int i = 0; i < 5; ++i) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	a a1;
	a1[0] = 1;
	a1[1] = 2; a1[3] = 12;
	a1.display();
	cout << a1[1];

	return 0;
}