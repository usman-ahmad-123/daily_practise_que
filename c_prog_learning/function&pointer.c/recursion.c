// Concise Tree
// #include<stdio.h>
// // int factorial(int x){
// //   return x*factorial(x-1);   //(x-1)=0-1 ,x=0
// // }
// // int factorial(int x){
// //   return x*factorial(x-1);
// // .
// // .
// // }
// // int factorial(int x){
// //   return x*factorial(x-1);
// // }
// // int factorial(int x){
// //   if(x==1) return 1;    // limit the fn
// //   return x*factorial(x-1);
// // }
// int main(){
//   int n;
//   scanf("%d",&n);
//   int fact=factorial(n);
//   printf("%d",fact);
//   return 0;
// }

//Q.  print n to 1 (OR 1 to n) in column
// #include<stdio.h>
// int decrease(int x){   //=>n=x
//   for(int i=x;i>=1;i--)  //for(int i=1;i<=x;i++)  when it's increasing
//     printf("%d\n",i);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   int r=decrease(n);
//   printf("%d\n",r);
//   return 0;
// }
//OR
// #include<stdio.h>
// void increase(int x,int n){
//     if(x>n) return; //for(int i=1;i<=x;i++)  when it's increasing
//     printf("%d\n",x);
//     increase(x+1,n);
//     return;
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   increase(1,n);
//   return 0;
// }

//Q.print multiple times a word CP
// #include<stdio.h>
// void greeting(int n){
//   if(n==0) return;
//   printf("CP\n");
//   greeting(n-1);  //Calling it self
//   return;
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   greeting(n);
//   return 0;
// }

//Q. print 1 to n   recursion
// #include<stdio.h>
// void increase(int n){
//   if(n==0) return;
//   increase(n-1);   //Calling itself when n=2 print 1
//   printf("%d\n",n);//                            2
//   return;
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   increase(n);
//   return 0;
// }

//Q.print     43211234  in vertical        
// #include<stdio.h>
// void increase(int n){
//   if(n==0) return;
//   increase(n-1);
//   printf("%d\n",n);
//   return;
// }
// void fn(int n){
//   if(n==0) return;
//   printf("%d\n",n);
//   fn(n-1);
//   return;
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   fn(n);
//   increase(n);
//   return 0;
// }


















