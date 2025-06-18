//#include<iostream>
//#include<vector>
//#include<algorithm> // adjacent_find() is included in this
//#include<cmath> // for abs()
//using namespace std;
//bool findd(int c, int d) {
//	return (abs(c - d) == 2);
//}
//
//int main() {
//	vector<int>a = {1,2,3,5,4,4,5,6};
//	vector<int>::iterator res;
//	res = adjacent_find(a.begin(), a.end()); // finding 2 same consecutive elements
//	if (res == a.end()) {
//		cout << "a does not contain any duplicates" << endl;
//	}
//	else {
//		cout << "duplicate found: " << *res << endl;
//	}
//
//	// using adjacent_find to find adjacent elements with difference 2
//	a = {1,3,2,4,5,6};
//
//	//auto it = adjacent_find(a.begin(), a.end(), findd);
//	// can also use lambda
//	auto it = adjacent_find(a.begin(), a.end(), [](int a, int b) {return abs(a - b) == 2;});
//	if (it == a.end()) {
//		cout << "no such elements found" << endl;
//	}
//	else {
//		while (it != a.end()) {
//			if ((it + 1) != a.end()) { // Ensure that *(it + 1) is valid, preventing ITERATOR INVALIDATION
//				cout << "Elements found: " << *it << " " << *(it + 1) << endl;
//			}
//			it = adjacent_find(it + 1, a.end(), [](int a,int b){return abs(a-b)==2;});
//		}
//	}
//
//	return 0;
//}