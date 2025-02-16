#include<stdio.h>
#include<stdlib.h>

int main(){
    /*
    // WRITE IN FILE

    int num;
    FILE *fptr;
    fptr = fopen("req.txt", "w+"); // creates a new file since the file doesn't exist

    printf("Enter your num: ");
    scanf("%d", &num); // takes the num as input

    fprintf(fptr, "%d \n", num); // prints the num in the file
    fprintf(fptr, "Program to write in a file");

    fclose(fptr);// closes the file
*/

/*
    // READ FROM FILE

    FILE *fptr;
    fptr = fopen("req.txt", "r");
    int m;
    char s[100];
    fscanf(fptr,"%d",&m);
    printf("%d \n",m);
    
    //fgetc(fptr); // will only read 1 space when called
    fgets(s, sizeof(s), fptr); // to ignore all the characters untill \n is met

    fgets(s, sizeof(s), fptr); // reads the string from the file
    printf("%s\n", s);
    fclose(fptr);
*/

    // APPEND TO FILE

    FILE *fptr;
    fptr = fopen("req.txt", "a");
    
    fprintf(fptr, "\n");
    fprintf(fptr,  "appended string here");

    fclose(fptr);
    return 0;
}
