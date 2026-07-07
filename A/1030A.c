#include<stdio.h>
int main(){
    int n,resp,a=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&resp);
         if(resp==0){
            a+=1;
        }
    }
    if(a==n){
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    return 0;
}