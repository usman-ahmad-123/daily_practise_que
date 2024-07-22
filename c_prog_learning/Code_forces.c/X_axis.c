#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int h;
    for(int i=1;i<=n;i++){
        int p;
        scanf("%d",&p);
        int q;
        scanf(" %d",&q);
        int r;
        scanf(" %d",&r);
        if(p >= q && p >= r) {
            h = (q >= r) ? (p - r) : (p - q);  // if(q>=r) h=(p-r) else h=(p-q)
        }
        if(q >= p && q >= r) {
            h = (p >= r) ? (q - r) : (q - p);
        }
        if(r>=p && r>=q){
            h = (q >= p) ? (r - p) : (r - q);
        }
        printf("%d\n",h);
    }
    return 0;
}



















