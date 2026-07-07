#include <stdio.h>
 
int main()
{
    int n,p,q,r=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&p,&q);
        if(q-p>=2){
            r++;
        }
    }
    printf("%d",r);
    
 
    return 0;
}