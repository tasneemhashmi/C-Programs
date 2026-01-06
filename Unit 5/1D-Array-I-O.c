#include <stdio.h>
int main(){
    int arr[10];
    int size=sizeof(arr);
    printf("Taking input in 1D array:\n");
    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        getchar();
    }
    printf("Printing array elements:\n");
    for (int j=0; j<size; j++){
        printf("%d\n", arr[j]);
    }
    return 0;
}