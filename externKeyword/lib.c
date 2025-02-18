#include<stdio.h>
#include<stdlib.h>
#include "lib.h"
// we will share global var across multiple file using extren keyword
// extern lagake we can allocate the memory later.

//int num = 10;
void print() {
	printf("%d\n", num);
}
void increment() {
	num++;
}