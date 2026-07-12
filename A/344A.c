#include<stdio.h>
int main(){
    int n,g=1,a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
            if(a[i] != a[i-1])
                g++;
    }
    printf("%d",g);
    return 0;
}