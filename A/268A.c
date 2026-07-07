#include<stdio.h>
int games(int n, int h[], int g[]){
    int ttl = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && h[i]==g[j]){
                ttl++;
                
            }
        }
    }
    return ttl;
}
int main(){
    int n,h[100],g[100],ttl=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&h[i],&g[i]);
    }
    int gg=games(n,h,g);

    printf("%d\n",gg);
    
}