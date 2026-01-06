#include<stdio.h>
int main(){
    printf("ODD EVEN CHECKER\n");
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    if (num%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}