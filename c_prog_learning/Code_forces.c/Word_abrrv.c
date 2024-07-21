//Q. print    Input:3 
//                  widns      5=j<10
//                  sjnhbsdjnccxjbdxz    j>10
//                  asdsknsks           9=j<10
//           Output:widns        j<=10
//                  s15z         j>10
//                  asdsknsks    j<10      j

#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        int m;
        for(int j=1;j<=m;j++){
            int r;    
            if(97<=r<=122){
                char ch=(char)r;
                scanf("%c",ch);  
            }
        }
        printf("\n");
    }
    int m=1,j;
    if(m>10){
        int r1,r2;
        char a=(char)r1;
        if(j==1) printf("%c",a);
        printf("%d",(m-2));
        char b=(char)r2;
        if(j==m) printf("%c",b);
    }
    else{
        for(int j=1;j<=m;j++){
            int r;    
            char ch=(char)r;
            scanf("%c",ch);
        }
    }
    printf("\n");
    return 0;
}