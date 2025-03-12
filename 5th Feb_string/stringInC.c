#include <stdio.h>
#include<string.h>

int main() {
    /*
    int arr[] = {1,2,3,4};
    printf("%d\n", sizeof(arr)/sizeof(int));
    
    int mult[2][3]={{1,2,3}, {2,3,4}};
    printf("%lu\n", sizeof(mult)/sizeof(mult[0][0]));
   */ 
    char st[20]="hey there"; //size:= 10
    printf("%d\n",sizeof(st)/sizeof(st[0]));
    char name[] ="Jay";
    
    strcat(st, name);
    printf("%s\n",st);
    
    char n[]="";
    // trying to copy a string
    strcpy(n, st);
    printf("%s\n", n); // copied
    
    printf("%s\n", st); // copied

    printf("%d\n",strcmp(n,st));
    
    /*
    float f = 19.988888;
    printf("%.2f",f);
    */
    
    //strstr() returns the first ocurance of a string in another str
    char arr1[] = "betty bought some butter";
    char *pattern = strstr(arr1, "be");
    if(pattern != NULL){
        printf("%s \n", pattern);
    }
    else{
        printf("Not found");
    }
    
    //strtok() -> like stringstream in c++, used to split sentence to words
    char *ab = strtok(arr1, " ");
    while(ab != NULL){
        printf("%s, ", ab);
        ab = strtok(NULL, " ");
    }
    
    
    
    return 0;
}