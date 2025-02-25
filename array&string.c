#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4};
    printf("%d\n", sizeof(arr)/sizeof(int));
    
    int mult[2][3]={{1,2,3}, {2,3,4}};
    printf("%lu\n", sizeof(mult)/sizeof(mult[0][0]));
    
    char st[]="hey there "; //size:= 10
    printf("%d\n",sizeof(st)/sizeof(st[0]));
    char name[] ="Jay";
    
    strcat(st, name);
    printf("%s\n",st);
    
    char n[]="";
    // trying to copy a string
    printf("%d \n",strlen(st));
    strcpy(n, st);
    printf("%s \n", n); // copied
    printf("%s \n", st); // copied

    printf("%d\n",strcmp(n,st));
    
    return 0;
}