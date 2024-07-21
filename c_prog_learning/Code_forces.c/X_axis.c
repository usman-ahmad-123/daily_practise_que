#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        int p;
        scanf("%d",&p);
        int q;
        scanf(" %d",&q);
        int r;
        scanf(" %d",&r);
    }
    printf("\n");
    int p,q,r,h;
    for(int j=1;j<=n;j++){
        if(p>=q && p>=r){
            if(q>=r){
                printf("%d",(p-r));
            }
            else{
                printf("%d",(p-q));
            }
        }
        if(q>=p && q>=r){
            if(p>=r){
                printf("%d",(q-r));
            }
            else{
                printf("%d",(q-p));
            }
        }
        if(r>=q && r>=p){
            if(q>=p){
                printf("%d",(r-p));
            }
            else{
                printf("%d",(r-q));
            }
        }
        printf("\n");
    }
    return 0;
}


















