#include <stdio.h>
 
int main()
{
    int n,x;
    float p=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&x);
        p+=x;
    }
    p/=n;
    printf("%.12f",p);
 
    return 0;
}