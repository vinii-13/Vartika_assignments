// #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Filehandler {
	FILE* file;

public:
	explicit Filehandler( const char* name, const char* m): file(fopen( name, m))
	{
		if (!file) {
			throw runtime_error("failed to open file");
		}
	} 
	//we used explicit, now assignment wont be allowed.

	Filehandler(Filehandler& obj) = delete; //delete copy constructor and assignment
	Filehandler& operator=(Filehandler& obj) = delete;

	Filehandler(Filehandler&& obj) noexcept :file(obj.file){ //move constructor
		obj.file = nullptr;
	}
	Filehandler& operator=(Filehandler&& obj) = delete;

	~Filehandler(){// ' custom destructor ' not custom deleter
		fclose(file);
	}

	void write(const string& text) {
		if (fputs(text.c_str(), file) == EOF) {
			throw runtime_error("error opening file");
		}
	}

};
int main() {
	return 0;
}
