#include <stdio.h>
int main(){
    /*A pointer is a variable that stores the address
    of another variable.*/
    int age=18;
    int *pAge=&age; //pointer variable declaration
    printf("Value of declared varibale: %d\n", age);
    printf("Address of the variable: %p\n", pAge);
    printf("Value of pointer variable: %d\n", *pAge); //dereferencing
    *pAge=19; //variable value updation in same memory address
    printf("Updated value of variable: %d", age);
    return 0;
}