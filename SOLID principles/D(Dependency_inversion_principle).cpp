/* It states that high-level modules should not depend on low-level modules, 
*  instead they both should depend on abstraction.
* 
*	scenario:- 
*		voicemessage feature is utilized in social media applications and also in phone call applications
*/

#include<iostream>
using namespace std;

class voicemail {
public:
	virtual void voiceMessage() = 0; 
	virtual ~voicemail() = default;
};

class whatsapp: public voicemail{
public:
	void voiceMessage() override {
		cout << "sending voice message through Whatsapp" << endl;
	}
};

class facebook:public voicemail {
public:
	void voiceMessage() override {
		cout << "sending voice message through facebook" << endl;
	}
};
class truecaller:public voicemail {
public:
	void voiceMessage() override {
		cout << "sending voice message through truecaller" << endl;
	}
};
class phone:public voicemail {
public:
	void voiceMessage() override {
		cout << "sending voice message through phone" << endl;
	}
};


int main(){
	voicemail* v = new whatsapp();
	v->voiceMessage();
	return 0;
}