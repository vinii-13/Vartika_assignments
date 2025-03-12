//#include<stdio.h>
//#include<stdlib.h>
//#include<cstring>
//
//// union in C is also a way to store data of differnt data types under a same name.
//// in union, each data member does not have their own memory allocated to them, instead 
//// size of struct depends on the size of biggest data structure present in the union.
//
//// only one data member can be assigned values at a time, only the last assigned value will be retained.
//
//union student {
//	int num;
//	char arr[30];
//	float height;
//};
//
////int main() {
////	union student s1;
////	s1.num = 12;
////	printf("number: %i\n", s1.num);
////	strcpy_s(s1.arr, "emily");
////
////	printf("array: %s\n", s1.arr);
////	s1.height = 12.34;
////
////	printf("height: %f\n", s1.height);
////
////	return 0;
////}