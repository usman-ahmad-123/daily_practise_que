#include<stdio.h>
int main(){
//Q.  WAP to print  ***********   star pyramid mast.
//                  ***** *****
//                  ****   ****
//                  ***     ***
//                  **       **
//                  *         *
    int n;
    printf("n :");
    scanf("%d",&n);
    for(int f=1;f<=2*n-1;f++){
        printf("*");
    }
    printf("\n");
    int  sp=1;
    int st=n-1;
    for(int i=1;i<=n;i++){
        for(int l=1;l<=st;l++){
            printf("*");
        }
        for(int j=1;j<=sp;j++){
               printf(" ");
                }
        for(int k=1;k<=st;k++){
            printf("*");
        }
        st--;
        sp+=2;
        printf("\n");
    }
    return 0;
}
