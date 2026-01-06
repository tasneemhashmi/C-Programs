#include <stdio.h>
int main(){
    //continue Demo
    //Multiples of 3 are skipped
    int n;
    printf("Enter end number:");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if (i%3==0){
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
}