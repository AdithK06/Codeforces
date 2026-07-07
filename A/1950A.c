#include<stdio.h>
int main(){
    int t;
    scanf("%d\n",&t);
    int a[t],b[t],c[t];
    for(int i=0;i<t;i++){
        scanf("%d %d %d\n",&a[i],&b[i],&c[i]);
    }
    for(int i=0;i<t;i++){
        if(a[i]<b[i]&&b[i]<c[i]){
            printf("STAIR\n");
        }
        else if(a[i]<b[i]&&b[i]>c[i]){
            printf("PEAK\n");
        }
        else{
            printf("NONE\n");
        }
    }
    return 0;
}