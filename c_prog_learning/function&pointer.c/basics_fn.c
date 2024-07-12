#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){ 
    int a,b;
    printf("a :");
    scanf("%d",&a);
    printf("b :");
    scanf("%d",&b);
    int s=(a,b);
    printf("%d",s);
    return 0;
}