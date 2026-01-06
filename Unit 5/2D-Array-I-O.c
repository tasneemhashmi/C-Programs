#include <stdio.h>
int main(){
    int arr[4][4];
    printf("Taking array input:\n");
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Displaying array elements:\n");
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}