#include <stdio.h>
 
int main() {
    int n,p,v,t,num=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&p,&v,&t);
        if(p+v+t>=2 && p+v+t<=3){
            num+=1;
        }
    }
    printf("%d\n",num);
    return 0;
}