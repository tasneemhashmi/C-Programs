#include <stdio.h>
int main(){
    /*1
    1
    12
    123
    1234*/
    int n; 
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    /*2
    1
    22
    333
    444*/
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }

    /*3
    1234
    123
    12
    1*/
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    /*4
    1
    01
    101
    0101*/
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if ((i+j)%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    /*5
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15*/
    int sum=0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            sum+=1;
            printf("%d ", sum);
        }
        printf("\n");
    }

    /*6
    A
    AB
    ABC
    ABCD*/
    for (int i=1; i<=n; i++){
        for (int j=65; j<65+i; j++){
            printf("%c", j);
        }
        printf("\n");
    }

    /*7
    ABCD
    ABC
    AB
    A*/
    for (int i=n; i>=1; i--){
        for (int j=65; j<65+i; j++){
            printf("%c", j);
        }
        printf("\n");
    }

    /*8
    A
    BB
    CCC
    DDDD*/
    for (int i=65; i<65+n; i++){
        for (int j=65; j<=i; j++){
            printf("%c", i);
        }
        printf("\n");
    }
    
    return 0;
}   