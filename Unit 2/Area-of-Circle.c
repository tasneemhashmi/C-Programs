#include<stdio.h>
int main(){
    int r;
    printf("Radius of Circle in Metres:");
    scanf("%d", &r);
    float area=(22/7)*r*r;
    printf("Area of Circle: %f", area);
    return 0;
}