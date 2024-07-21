#include<stdio.h>
int decrease(int x){
  for(int i=x;i>=1;i--)  //for(int i=1;i<=x;i++)  when it's increasing
    printf("%d\n",i);
}
int main(){
  int n;
  scanf("%d",&n);
  int r=decrease(n);
  printf("%d\n",r);
  return 0;
}