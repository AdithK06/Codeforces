#include <stdio.h>
int main()
{
    int n,a,b,cur=0,max=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&a,&b);
        cur+=b;
        cur-=a;
        if(cur>max){
            max=cur;
        }
    }
    printf("%d",max);
    
    return 0;
}