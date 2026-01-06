#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Maximum Number Finder\n");
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    int lar;
    if (num1>num2){
        if (num1>num3){
            lar=num1;
        }
        else{
            lar=num3;
        }
    }
    else{
        if (num2>num3){
            lar=num2;
        }
        else{
            lar=num3;
        }
    }
    printf("Maximum: %d", lar);
    return 0;
}
