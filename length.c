#include<stdlib.h>
#include<stdio.h>
#include<string.h>

static int a = 0;
void fun(char* arr) {
	if (*arr == '\0') {
		return;
	}
	else {
		a++;
		fun(arr + 1);
	}
}

int main() {
	char arr[] = "Finding length of string";
	fun(arr);
	printf("%d", a);

	return 0;
}
/*
#include <stdio.h>
void stringLen(char arr[]){
	int ans = printf(arr);
	printf("%d", ans-1);
}
int main() {
	stringLen("fshjskhfkjandkjafbhalkjdkadncabfukshdakc\n");
	return 0;
}
*/