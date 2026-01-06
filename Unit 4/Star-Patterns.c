#include <stdio.h>
int main(){
    /*1
    ****
    ****
    ****
    ****
    n*n*/
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }

    /*2
    *
    **
    ***
    ****
    if n=4*/
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    /*3
    ****
    ***
    **
    *
    */
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    /*3
        *
       ***
      *****
     *******
    */
    for (int i=1; i<=n; i++){
        for (int sp=1; sp<=n-i; sp++){
            printf(" ");
        }
        for (int st=1; st<=2*i-1; st++){
            printf("*");
        }
        printf("\n");
    }

    /*4
    *******
     *****
      ***
       *
    */
    for (int i=n; i>=1; i--){
        for (int sp=1; sp<=n-i; sp++){
            printf(" ");
        }
        for (int st=1; st<=2*i-1; st++){
            printf("*");
        }
        printf("\n");
    }

    /*5
       *
      ***
     *****
    *******
     *****
      ***
       *
    */
    for (int i=1; i<=n; i++){
        for (int sp=1; sp<=n-i; sp++){
            printf(" ");
        }
        for (int st=1; st<=2*i-1; st++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1; i>=1; i--){
        for (int sp=1; sp<=n-i; sp++){
            printf(" ");
        }
        for (int st=1; st<=2*i-1; st++){
            printf("*");
        }
        printf("\n");
    }

    /*6
    *
    ***
    *****
    *******
    *****
    ***
    *
    */
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1; i>=1; i--){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    /*7
    ****
    *  *
    *  *
    ****
    */
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==1 || i==n || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}