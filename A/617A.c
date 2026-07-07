#include <stdio.h>
int main()
{
    int c,step=0;
    scanf("%d\n",&c);
    if(c%5==0){
        step=c/5;
    }
    else{
        step=(c/5)+1;
    }
    printf("%d",step);
    return 0;
}