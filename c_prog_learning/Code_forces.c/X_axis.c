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
    int p,q,r,h;
    for(int j=1;j<=n;j++){
        if(p>=q && p>=r){
            if(q>=r){
                h=(p-r);
            }
            else{
                h=(p-q);
            }
        }
        if(q>=p && q>=r){
            if(p>=r){
                h=(q-r);
            }
            else{
                h=(q-p);
            }
        }
        if(r>=q && r>=p){
            if(q>=p){
                h=(r-p);
            }
            else{
                h=(r-q);
            }
        }
        printf("%d\n",h);
    }
    return 0;
}


















