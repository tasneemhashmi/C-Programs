#include<stdio.h>
int main(){
    int int_val;
    float float_val;
    char char_val;
    double double_val;
    scanf("%d %f %c %lf", &int_val, &float_val, &char_val, &double_val);
    printf("Int Variable: %d\n", int_val);
    printf("Float Variable: %f\n", float_val);
    printf("Char Variable: %c\n", char_val);
    printf("Double Variable: %lf\n", double_val);
    return 0;
}
