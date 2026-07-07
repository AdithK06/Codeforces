#include <stdio.h>
 
int main()
{
    int n;
    char x[]="I hate";
    char y[]="I love";
    char a[]=" it";
    char b[]=" that ";
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        if(i%2==0){
            printf("%s",y);
        }
        else{
            printf("%s",x);
        }
        if(i<n){
            printf("%s",b);
        }
    }
    printf("%s",a);
    
 
    return 0;
}