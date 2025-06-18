//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main() {
//	//vector<int>v{ 1,2,2,3,4,5,5,5,6 };
//	/*
//	vector<int>v{ 9,8,7,6,5,3 };
//	for (int i = 0; i < v.size(); ++i) {
//		if (binary_search(v.begin(), v.end(), i, greater<int>())) {
//			cout << i << " found." << endl;
//		}
//	}
//	*/
//
//	// copy and copy_backward()
//	vector<int>src{1,3,2,4,4,2,4,3,2};
//	vector<int>dest(src.size());
//	vector<int>backcopy(src.size());
//
//	copy(src.begin(), src.end(),dest.begin());
//	for (int i = 0; i < dest.size(); ++i) {
//		cout << dest[i] << " ";
//	}
//	cout << endl;
//
//	copy_backward(src.begin(), src.end(), backcopy.end()); // couldn't understand its use case
//	for (int i = 0; i < backcopy.size(); ++i) {
//		cout << backcopy[i] << " ";
//	}
//	cout << endl;
//	vector<int>v1(3);
//	fill(v1.begin(), v1.end(), -2); // fill()
//	for (int i : v1) {
//		cout << i << " ";
//	}
//	cout << endl;
//
//	vector<int>s2(4, -2);
//	fill_n(s2.begin(), s2.size()/2, -1 ); // fills first half of array
//	for (int i : s2) {
//		cout << i << " ";
//	}
//	cout << endl;
//
//	// find-> finds an element between range
//	auto ii = find(src.begin(), src.end(), 3); //find(begin, end, val);
//	if (ii == src.end()) {
//		cout << "not found";
//	}
//	else {
//		cout << *ii << endl;
//	}
//	return 0;
//}