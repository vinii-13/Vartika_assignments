//// Online C++ compiler to run C++ program online
//#include <iostream>
//#include <array>
//#include<experimental/array>
//using namespace std;
//int main() {
//    // make array
//    cout << "make_array() function" << endl;
//    auto arr = experimental::make_array(1, 2, 3, 4);
//    for (auto it : arr) {
//        cout << it << " ";
//    }
//    cout << endl;
//
//    // member functions
////1. element access-> at(),[],front,back
//    cout << "\nmember functions" << endl;
//    cout << "1. Element access-> at(),[],front(),back()" << endl;
//    array<int, 5> a = { 1,2,3,4,5 };
//    cout << "array: ";
//    for (int i : a) {
//        cout << i << " ";
//    }
//
//    cout << "\na.at(1): " << a.at(1) << endl;
//    cout << "a[0]: " << a[0] << endl;
//    cout << "a.front(): " << a.front() << endl;
//    cout << "a.back(): " << a.back() << endl;
//
//    cout << "\n2. Iterators->begin(), end(), rbegin(), rend()" << endl;
//    cout << "a.begin(): " << *a.begin() << endl;
//    cout << "a.end(): " << *(a.end() - 1) << endl;
//    cout << "a.rbegin(): " << *a.rbegin() << endl;
//    cout << "a.rend(): " << *(a.rend() - 1) << endl;
//
//    cout << "\n3. Capacity->empty(), size(), max_size()" << endl;
//    cout << "a.empty(): " << a.empty() << endl;
//    cout << "a.size(): " << a.size() << endl;
//    cout << "a.max_size(): " << a.max_size() << endl;
//
//    cout << "\n4. Operations-> swap(), fill()" << endl;
//    cout << "swap(a.at(0), a.at(3)): ";
//    swap(a.at(0), a.at(3));
//    for (int i : a) {
//        cout << i << " ";
//    }
//    cout << endl;
//
//    cout << "fill(a.begin(), a.end(), 8): ";
//    fill(a.begin(), a.end(), 8);
//    for (int i : a) {
//        cout << i << " ";
//    }
//    cout << endl;
//
//    return 0;
//}