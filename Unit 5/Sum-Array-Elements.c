#include <stdio.h>
int main(){
    int arr[4][4];
    printf("Taking array input:\n");
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sum=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum of array elements: %d", sum);
    return 0;
}