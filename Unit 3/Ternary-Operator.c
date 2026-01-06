#include <stdio.h>
int main(){
    int num;
    printf("ODD EVEN CHECKER\n");
    printf("Enter number:");
    scanf("%d", &num);
    (num%2==0)?printf("Even"):printf("Odd");
    return 0;    
}