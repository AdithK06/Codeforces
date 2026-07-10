#include<stdio.h>
#include<string.h>
int main()
{
    int n,X=0;
    char op[5];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",op);
        if(strcmp(op,"X++")==0||strcmp(op,"++X")==0)
            X++;
        else 
            X--;
    }
    printf("%d",X);
    return 0;
}