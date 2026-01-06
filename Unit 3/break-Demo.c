#include <stdio.h>
int main(){
    //break Demo
    int arr[5]={10, 20, 30, 40 ,50};
    int target;
    printf("Enter target number:");
    scanf("%d", &target);
    for (int i=0; i<5; i++){
        if (arr[i]==target){
            printf("Found at index: %d", i);
            break;
        }
    }

    return 0;
}