#include <stdio.h>
void primeCheck(int a){
    int sum=0;
    for (int i=1; i<=a; i++){
        if (a%i==0){
            sum+=i;
        }
    }
    if (sum==a+1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
}

int factorial(int a){
    int fac=1;
    while(a>=1){
        fac*=a;
        a--;
    }
    return fac;
}

void swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(){
    int n;
    printf("Enter number to check if prime:");
    scanf("%d", &n);
    getchar();
    primeCheck(n);

    int m;
    printf("Enter number to calculate factorial:");
    scanf("%d", &m);
    getchar();
    printf("%d\n", factorial(m));

    int p, q;
    printf("Enter two numbers to swap:");
    scanf("%d %d", &p, &q);
    getchar();
    swap(&p, &q);
    printf("%d %d\n", p, q);

    return 0;
}