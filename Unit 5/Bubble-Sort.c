#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter array elemnets:\n");
    for (int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        getchar();
    }
    for (int j=0; j<5-1; j++){
        for (int m=0; m<5-1-j; m++){
            if (arr[m]>arr[m+1]){
            int temp=arr[m];
            arr[m]=arr[m+1];
            arr[m+1]=temp;
        }
        }
    }
    printf("Printing sorted array elements in ascending order:\n");
    for (int k=0; k<5; k++){
        printf("%d\n", arr[k]);
    }
    return 0;
}