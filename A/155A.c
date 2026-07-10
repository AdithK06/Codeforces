#include<stdio.h>
int main()
{
    int n,arr[1000],curr=0,max=0,min=0,p=0;
    scanf("%d",&n);
       
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        max=arr[0];
        min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[0]==arr[i])
        {
            p=0;
        }
        else if(max<arr[i])
        {
            p++;
            max=arr[i];
        }
        else if(min>arr[i])
        {
            p++;
            min=arr[i];
        }
        
    }
    printf("%d",p);
    return 0;
}