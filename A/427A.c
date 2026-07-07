#include<stdio.h>
int main(){
    int n,a,t=0,b=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        
        if(a>0){
            b+=a;
        }
        else if(a==-1){
            if(b>0){
                b-=1;
            }
            else if(b==0){
                t+=1;
            }
        }
    }
    printf("%d\n",t);
    return 0;
}