#include<stdio.h>
int main(){
    int n;
    printf("SUM OF N NUMBERS\n");
    printf("Enter number:");
    scanf("%d", &n);
    int sum=0;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum: %d", sum);
    return 0;
}