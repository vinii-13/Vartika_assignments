#include <iostream>
#include <string> //<cstring> for c

using namespace std;

//int main() {
//	string s = "hello world";
//	//getline(cin, s);	// input with spaces
//	
//	cout << s.length() <<" " << s.size() << endl; // for string, "strlen(s)" for char *arr[] 
//	
//	// concatenation -> way1 (+)
//	string a = "hey ";
//	string b = "there";
//	cout << a + b << endl;
//
//			// for c-> strcat(str1, str2);
//			
//	// concatenation -> way2 ( .append() )
//	string c = a.append("you");
//	cout << c << endl;
//
//	// copy -> way 1 (=)
//	string d = a;
//	cout << d << endl;
//			// for c-> strcpy(dest, src);
//	// copy -> way 2 ( .assign() )
//	d.assign("hello again");
//	cout << d << endl;
//
//	// to check if string is empty, returns boolean values
//	cout << d.empty() << endl;
//
//	// to clear string content
//	d.clear();
//	cout << d.empty() << endl;
//
//	// substring
//	string f = a.substr(0, 3);
//	cout << "f: " << f << endl;
//
//		
//	return 0;
//}