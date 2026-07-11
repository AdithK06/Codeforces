#include<stdio.h>
int main()
{
    int n,a,b=4,c=9;
    scanf("%d",&n);
        if(n%2==0)
        {
            a=n-4;
            printf("%d %d",a,b);
        }
        else{
            a=n-9;
            printf("%d %d",a,c);
        }
    return 0;

}