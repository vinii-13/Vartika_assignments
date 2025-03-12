#include<iostream>
using namespace std;

class a {
	int x;
	int y;
public:
	a(int x1, int y1) {
		x = x1;
		y = y1;
	}

	void operator==(const a& a1) {
		if ((this->x == a1.x) and (this->y == a1.y)) {
			cout << "equal" << endl;
		}
		else {
			cout << "not equal" << endl;
		}
	}
};
int main()
{
	a a1(1, 2);
	a a2(2, 3);
	a1 == a2;

	return 0;
}