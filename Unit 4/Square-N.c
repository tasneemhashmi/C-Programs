#include <stdio.h>
int square(int a){
    return a*a;
}
int main(){
    int n;
    scanf("%d", &n);
    int sq=square(n);
    printf("Square of %d: %d", n, sq);
    return 0;
}