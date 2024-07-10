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

//Que.triangle pattern
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }

//Que. WAP to print pattern        *
//                                 * 
//                             * * * * *
//                                 *
//                                 *
//Method-1
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     if(i==(n+1)/2){
    //         for(int j=1;j<=n;j++){
    //             printf("*");
    //         }
    //     }
    //     else{
    //         for(int j=1;j<=n;j++){
    //             if(j!=(n+1)/2){
    //                 printf(" ");
    //             }
    //             else{
    //                 printf("*");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }
//Method-2
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         int a=n/2+1;
    //         if(j==a || i==a) printf("*");
    //         else printf(" ");
    //     }
    //     printf("\n");
    // }
    
//Que. WAP to print *******
//                  *     *
//                  *     *
//                  *******    
    // int n,m;
    // printf("n,m :");
    // scanf("%d %d",&n,&m);
    // for(int i=1;i<=n;i++){        //n is the number of rows
    //     for(int j=1;j<=m;j++){    //m is the number of column
    //         if((i==1 || i==n) || (j==1 || j==m)){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }            
    //     }
    //     printf("\n");
    // } 
// ;.,'//'
//Que. WAP to print *   * 
//                   * *
//                    *
//                   * *
//                 *    *
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         int a,b;
    //         if(i==j || j==n-i+1) printf("*");
    //         else printf(" ");
    //     }
    //     printf("\n");
    // }

//Que. WAP to print  3
//                   5 7
//                   9 11 13
//                   15 17 18 19
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         a=a+2;
    //         printf("%d ",a);
    //     }
    //     printf("\n");
    // }

//QUE. WAP to print 1
//                  0 1
//                  1 0 1
//                  0 1 0 1
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0)){
    //             printf("1 ");
    //         }
    //         else{
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }

//Que. WAP to print         ******
//                         ******
//                        ******
//                       ******
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+6;j++){
    //         if(j<=n-i) printf(" ");
    //         else printf("*");
    //     }
    //     printf("\n");
    // }

//Que. WAP TO PRINT         *
//                         * *
//                        * * *
//                       * * * *
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=n-i+1;k<=n;k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

//Que. WAP to print     *
//                     ***
//                    *****
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

//Que. WAP to print         *   Diamond printing.
//                         ***
//                        *****
//                         ***
//                          *
    int n;
    printf("n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==n/2+1){
            for(int j=1;j<=n;j++){
                printf("*");
            }
        }
        else{
            if(i<=n/2 || i==(n+3-i)){
                for(int j=1;j<=(n/2)+(1-i);j++){
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++){
                    printf("*");
                }
            }
        }
        printf("\n");
    }






//Que WAP to print          1
//                        2 1
//                      3 2 1 
//                    4 3 2 1
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=i;k>=1;k--){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

//Que. WAP to print ******...n
       //           **....n-1
       //           . . .n-2
       //           *

// WAP to print 1 2 3 4 ..n
//              1 2 .n-1
//              . . n-2
//              1
    //  int n;
    //  printf("n :");
    //  scanf("%d",&n);
    //  for(int i=1;i<=n;i++){
    //      for(int j=1;j<=n-i+1;j++){
    //          printf("%d ",j);
    //      }
    //      printf("\n");
    //  }

//Que WAP to print A.P triangle           1
//                                       31
//                                      531
//                                i-1 ... 1
    //                        2*i-1.. . ..1            
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=2+(i-1)*2;k>=1;k--){
    //         printf("%d ",k);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     int a=0;
    //     for(int k=i;k>=1;k--){
    //         a=a+2;
    //         printf("%d",a);
    //     }
    //     printf("\n");
    // }

//Que. WAP to print ABCDEF...
//                  ABCDEF...
//                  ABCDEF...
//                  ........
    // int n,m;
    // printf("n,m :");         //n=no of rows
    // scanf("%d %d",&n,&m);    //m=no of Alphabet
    // for(int i=1;i<=n;i++){
    //     int a=1;
    //     for(int j=1;j<=m;j++){
    //         int d=a+64;
    //         char ch=(char)d;   //ch=(char)->
    //         printf("%c ",ch);
    //         a++;
    //     }
    //     printf("\n");
    // }

//Que. WAP to print A       
//                 BA 
//                CBA 
//               DCBA 
    // int n;
    // printf("n :");         //n=no of rows
    // scanf("%d",&n);    //m=no of Alphabet
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     int a=1;
    //     for(int k=1;k<=i;k++){
    //         int d=a+64;
    //         char ch=(char)d;   //ch=(char)->
    //         printf("%c",ch);
    //         a++;
    //     }   
    //     printf("\n");
    // }
    
// Que. WAP to print            A
//                             BA
//                            CBA
//                           DCBA     
    // int n;
    // printf("n :");         //n=no of rows
    // scanf("%d",&n);    //m=no of Alphabet
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     int a=1;
    //     for(int k=i;k>=1;k--){
    //         int d=i+65-a;
    //         char ch=(char)d;   //ch=(char)->
    //         printf("%c",ch);
    //         a++;
    //     }   
    //     printf("\n");
    // }
//Que. WAP to print   ABCDEF
//                    ABCDE
//                    ABCD
//                    ABC
//                    AB
//                    A
    // int n;
    // printf("n :");         //n=no of rows
    // scanf("%d",&n);    //m=no of Alphabet
    // for(int i=1;i<=n;i++){
    //     int d,a=1;
    //     for(int j=1;j<=n-i+1;j++){
    //         char ch=(char)d;
    //         d=a+64;
    //         printf("%c ",d);
    //         a++;
    //     }
    //     printf("\n");
    // }

//Que. WAP to print 1          or   A
//                  A B             1 2
//                  1 2 3           A B C
//                  A B C D         1 2 3 4
//                  1 2 3 4 5       A B C D E
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     // for(int l=1;l<=n-i;l++){     //    1      OR A 
    //     //     printf(" ");             //   AB        12       
    //     // }                            //  123       ABC
    //     //                              // ABCD      1234
    //     if(i%2!=0){
    //         int a=1,d;
    //         for(int j=1;j<=i;j++){
    //             char ch=(char)d;
    //             d=a+64;
    //             printf("%c",d);
    //             a++;
    //         }
    //     }
    //     else{
    //         for(int k=1;k<=i;k++){
    //             printf("%d",k);
    //         }
    //     }
    //     printf("\n");
    // }

//Que. WAP to print      A
//                       B C
//                       D E F
//                       G H I J 
//                       K L M N O
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // int a=1,ch;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch=a+64;
    //         printf("%c ",ch);
    //         a++;
    //     }
    //     printf("\n");
    // }

//Que. WAP to print          1
//                          123
//                         12345
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

//Que. WAP to print         1
//                         121
//                        12321
//                       1234321
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf("  ");
    //     }
    //     for(int k=1;k<=i;k++){
    //         printf("%d ",k);
    //     }
    //     for(int l=i-1;l>=1;l--){
    //         printf("%d ",l);
    //     }
    //     printf("\n");
    // }

//Que. WAP to print           1
//                            121
//                            12321
//                            1234321
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d",j);
    //     }
    //     for(int k=i-1;k>=1;k--){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

//Que. WAP to print         A
//                         ABA
//                        ABCBA
//                       ABCDCBA
    // int n;
    // printf("n :");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     int a=1,d;
    //     for(int k=1;k<=i;k++){
    //         char ch=(char)d;
    //         d=a+64;
    //         printf("%c",d);
    //         a++;
    //     }
    //     int b=0;
    //     for(int l=i-1;l>=1;l--){
    //         char ch=64+i-1-b;
    //         printf("%c",ch);
    //         b++;
    //     }
    //     printf("\n");
    // }
        


    



















    

    return 0;
}