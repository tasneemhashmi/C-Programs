#include <stdio.h>
#include <string.h>
int main(){
    /*Strings in C are character array with /0,
    written in double quotes.*/
    char str[256];
    printf("Enter string:\n");
    fgets(str, 256, stdin);
    //Length of a string = Size-1
    int str_length=strlen(str);
    printf("Length of string: %d\n", str_length);
    //Shallow copy of given string in another string variable
    char str_cpy[256];
    strcpy(str_cpy, str);
    printf("Original string: %s\n", str);
    printf("Copy string: %s\n", str_cpy);
    //String concatenation
    char add[64];
    printf("Enter string to concatenate:\n");
    fgets(add, 64, stdin);
    strcat(str, add);
    printf("Modified string: %s\n", str);
    //Comparing two strings
    char str_1[64], str_2[64];
    printf("Enter first string:");
    fgets(str_1, 64, stdin);
    printf("Enter second string:");
    fgets(str_2, 64, stdin);
    int res=strcmp(str_1, str_2);
    if (res==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are unequal");
    }
    return 0;


}