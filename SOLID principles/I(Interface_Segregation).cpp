#include<iostream>
using namespace std;
/*		users shouldn't depend on interfaces they don't use.
*		it enhances reusability and maintainability
* 
* scenario:- we have multiple apps but not all apps are included in both laptop and mobile phones
*		1. step counter
*		2. camera
*		3. fitness tracker
*		4. video call
*/
class stepCounter{
public: 
	stepCounter() {
		cout << "helps to count steps" << endl;
	}
};

class camera{
public:
	camera() {
 	cout << "can access camera" << endl;
	}
};

class fitnessTracker{
public:
	fitnessTracker() {
		cout << "tracks workout goals" << endl;
	}
};

class videoCall{
public:
	videoCall() {
		cout << "video call feature available" << endl;
	}
};

class mobile: public stepCounter, public camera, public fitnessTracker, public videoCall{
public:
	mobile() {
		cout << "mobile provides all these features\n" << endl;
	}
};
class laptop: public camera, public videoCall{
public:
	laptop() {
		cout << "laptop provides all these features\n" << endl;
	}
};
int main() {
	mobile m;
	laptop l;
	return 0;
}
