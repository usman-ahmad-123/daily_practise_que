





// CALLING fn

// #include<stdio.h>   user defined fn
// int add(int x, int y){   //return type a=x&b=y 
//     return x+y;
// }
// int main(){
//     int a,b;
//     printf("a :");
//     scanf("%d",&a);
//     printf("b :");
//     scanf("%d",&b);
//     int s=add(a,b);
//     printf("%d",s);
//     return 0;
// }

//LIBRARY FUNCTION

//Q. sqrt fn
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float n;
//     printf("n :");
//     scanf("%f",&n); //for y=[(x)^1/2] G.I.F instead use int,%d
//     float root=sqrt(n);  //y=(x)^1/2
//     printf("The square root is y :%f",root);
//     return 0;
// }

//Q. WAP to print exp fn.=(a)^x.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("a :");
//     scanf("%d",&a);
//     int x;
//     printf("x :");
//     scanf("%d",&x);
//     int exp=pow(a,x);     // xth power of a.
//     printf("y :%d",exp);    // exponential fn.y=(a)^x.
//     return 0;
// }

//FUNCTION PROTOTYPE calling a fn
// being called are above the calling fn.
// #include<stdio.h>
// void india(){
//     printf("\nindus\n");
//     void Aust();
//     Aust();
// }
// // int main(){
// //     printf("jhghgcb");
// //     india();
// //     return 0;
// // }
// void Afghanistan(){
//     printf("\nAfg");
// }
// // int main(){
// //     printf("jhghgcb");
// //     india();
// //     return 0;
// // }
// void Aust(){
//     printf("\naust\n");
//     Afghanistan();
//     return;
// }
// // int main(){
// //     printf("jhghgcb");
// //     india();
// //     return 0;
// // }

// #include<stdio.h>
// void fun(){
//     printf("weasd");
// }
// int main(){
//     void fun();
//     fun();
//     return 0;
// }
// void fun(){
//     printf("weasd");
// }

//PERMUTATION & COMBINATION

//Q. WAP to print nCr.
// #include<stdio.h>
// int factorial(int x){ //user defined fn.
//     int fact=1;
//     for(int i=1;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("n :");
//     scanf("%d",&n);
//     int r;
//     printf("r :");
//     scanf("%d",&r);
//     // int nfact=1;     //Met-2 nCr wthout user define.fn 
//     // int rfact=1;
//     // int nrfact=1;
//     // for(int i=2;i<=n;i++){
//     //     nfact=nfact*i;
//     // }
//     // for(int i=2;i<=r;i++){
//     //     rfact=rfact*i;
//     // }
//     // for(int i=2;i<=n-r;i++){
//     //     nrfact=nrfact*i;
//     // }
//     // int ncr=nfact/(rfact*nrfact);
//     // printf("nCr :%d",ncr);
//     // int nfact=fact(n);
//     // int rfact=fact(r);
//     int nr=(n-r);
//     int a=factorial(n)/(factorial(r)*factorial(nr));
//     printf("%d",a);
//     return 0;
// }

//WAP to print nPr.
// #include<stdio.h>
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f=f*i;
//     }
//     return f;
// }
// int permut(int n,int r){
//     int nr=(n-r);
//     int npr=fact(n)/fact(nr);
//     return npr;
// }
// int main(){
//     int n;
//     printf("n :");
//     scanf("%d",&n);
//     int r;
//     printf("r :");
//     scanf("%d",&r);
//     int npr=permut(n,r);
//     printf("%d",npr);
//     return 0;
// }
























//Q. user define fn for COMBINATION (it is not Libr.fn)
// #include<stdio.h>     
// int factorial(int x){
//     int fact=1;
//     for(int i=1;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int nCr= factorial(n)/(factorial(r)*factorial(n-r)); //calling fact
//     return nCr;
// }
// int main(){
//     int n;
//     printf("n :");
//     scanf("%d",&n);
//     int r;
//     printf("r :");
//     scanf("%d",&r);
//     int nCr=combination(n,r);
//     printf("nCr :%d",nCr);  //calling nCr
//     return 0;
// }

//Q. WAP to print Pascle Triangle  1
//                                1 1
//                               1 2 1
//                              1 3 3 1
//                             1 4 6 4 1
// #include<stdio.h>     
// int factorial(int x){
//     int fact=1;
//     for(int r=2;r<=x;r++){
//         fact=fact*r;
//     }
//     return fact;
// }
// int combination(int i,int k){
//     int iCk= factorial(i)/(factorial(k)*factorial(i-k)); //calling fact
//     return iCk;
// }
// int main(){
//     int n;
//     printf("n :");
//     scanf("%d",&n);
//     int a=2*(n-1);
//     for(int i=0;i<=(n-1);i++){
//         for(int j=1;j<=a;j++){
//             printf(" ");  //two gas taken at time.
//         }
//         a-=2;
//         for(int k=0;k<=i;k++){
//             int iCk=combination(i,k);
//             printf("  %d",iCk);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q. WAP to print Swap number.
// #include<stdio.h>
// void swap(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
//     return;
// }
// int main(){
//     int a;
//     printf("a :");
//     scanf("%d",&a);
//     int b;
//     printf("b :");
//     scanf("%d",&b);
//     //Without using user defined fn.
//     // a=a+b;        // now a=8 and b=5.
//     // b=a-b;        // now a=8 and b=3.
//     // a=a-b;        // now a=5 and b=3.
//     swap(a,b);   //User defined fn.
//     printf("value of a :%d",a);
//     printf("\nValue of b :%d",b);
//     return 0;
// }

// POINTER

// #include<stdio.h>
// int main(){
//     int n=5;
//     int* x=&n;
//     printf("%p\n",&x);  //print ->n*204
//     printf("%d\n",*x);  //print ->n
//     printf("%p",x);   //print ->6y5z2  
//     return 0;
// }

// Q. WAP to print Swap number.
// #include<stdio.h>
// void swap(int *x,int* y){
//     int temp=*x;  //temp=2
//     *x=*y;    //a=9
//     *y=temp;  //*y=2 ->b=2
//     return;
// }
// int main(){
//     int a=2;
//     int b=9;
//     // int *x=&a;
//     // int* y=&b;
//     //Without using user defined fn.
//     // a=a+b;        // now a=8 and b=5.
//     // b=a-b;        // now a=8 and b=3.
//     // a=a-b;        // now a=5 and b=3.
//     swap(&b,&a);   //User defined fn.
//     printf("value of a :%d\n",a);
//     printf("Value of b :%d",b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=2;
//     int* x=&a;    // int* x or int *x or int * x=&a; are same
//                   // stores addrress of int
//     int *y=&x;  // stores the address of int*
//     printf("%p\n",*y);
//     printf("%p\n",a);   // *x=a 
//     printf("%d",*x);
//     return 0;
// }

//Q. WAP to print HCF with user define.fn
// #include<stdio.h>
// int min(int p,int q){
//     if(p<q) return p;
//     else return q;
// }
// int HCF(int x,int y){
//     int r=1;
//     for(int i=1;i<=min(x,y);i++){
//         if(x%i==0 && y%i==0){
//           r=r*i;
//         }
//     } 
//     return r;
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     int b;
//     scanf("%d",&b);
//     int gcd=HCF(a,b);
//     printf("%d",gcd);
//     return 0;
// }

//Q. print fibonacci number
// #include<stdio.h>
// int fabonacci(int y){
//   int a=1;
//   for(int i=1;i<=y;i++){
//     a=a
//   }
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   int fabo=fabonacci(n);
//   printf("%d",fabo);
//   return 0;
// }




















