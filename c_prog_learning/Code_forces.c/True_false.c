//Q. WAP to print  3
//                 1 0 1
//                 1 1 1
//                 0 1 0
//                 2

#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int p=0;
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        int b;
        scanf(" %d",&b);
        int w;
        scanf(" %d",&w);
        if((a==1 && b==1 && w==1) || (a==1 && b==1 && w==0) || (a==1 && b==0 && w==1) || (a==0 && b==1 && w==1)){
            p++;
        }   
        else{
            p=p;
        }
    }
    printf("%d",p);
    return 0;
}