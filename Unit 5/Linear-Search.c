#include <stdio.h>
int main(){
    int arr[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target;
    printf("Enter number to linear search:");
    scanf("%d", &target);
    int i;
    int size=sizeof(arr);
    for (i=0; i<size; i++){
        if (arr[i]==target){
            printf("Number found at index: %d", i); break;
        }
    }
    if (i==size){
        printf("Number not found!");
    }
    return 0;
}