#include<stdio.h>
int main(){

    int a, b;
    char op;
    printf("SWITCH-CASE CALCULATOR\n");
    printf("[+]\t[-]\t[*]\t[/]\t[%%]\n");
    printf("Enter expression:");
    scanf("%d %c %d", &a, &op, &b);

    switch(op){
        case '+': printf("%d\n", a+b);break;
        case '-': printf("%d\n", a-b);break;
        case '*': printf("%d\n", a*b);break;
        case '/': printf("%d\n", a/b);break;
        case '%': printf("%d\n", a%b);break;
        default: printf("ERROR! Invalid syntax");
    }
    return 0;
}