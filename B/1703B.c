#include<stdio.h>
int main(){
    int t,n,r;
    char s[60];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int point=0;
        scanf("%d",&n);
        scanf("%s",s);
        
        for(int j=0;j<n;j++)
        {
            r=1;
            for(int k=0;k<j;k++)
            {
                if(s[j]==s[k])
                {
                    r=0;
                    break;
                }  
            }
            if(r==1)
                point+=2;
            else
                point+=1;
            
        }
        printf("%d\n",point);
    }
    return 0;
    
}