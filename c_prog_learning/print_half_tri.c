#include<stdio.h>
int main(){

// Que.WAP to print half of triangle with *.
    int n;
    printf("n :");
    scanf("%d ",&n);
     for(int i=1;i<=n;i++){    //no of rows>i
         for(int j=1;j<=i;j++){     //no of column>j
             printf("%d ",j);
         }
         printf("\n");
     }
return 0;
}