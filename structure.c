#include<stdio.h>
#include<stdlib.h>

// struct is a way to group data of different data types under a name where each data member 
// has their own memory allocated to them

// by default, the data members are public in structure

struct s {
	char name[50];
	int age;
	float height;
};

// pointers can be used as a data member in structures
struct p {
	int age;
	int* mark;
};

int main() {
	struct s student1 = { "Abbey", 12, 156.3};
	printf("info about student 1:- \n");
	printf( "Name: %s\n", student1.name);
	printf("Age: %d\n",student1.age);
	printf( "Height: %f\n", student1.height);

	int mark[3] = { 12,23,44 };
	struct p p1 = {12, mark};
	
	printf("Age of p2: %i\n", p1.age);
	printf("mark: %i\n",p1.mark[0]);
	return 0;
}
// structures in c cannot have functions directly as member functions but c++ can.
