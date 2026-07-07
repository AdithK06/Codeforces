#include<stdio.h>
int main(){
    int n,m,c,mt=0,ct=0;
    scanf("%d\n",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&m,&c);
        if(m>c){
            mt+=1;
        }
        else if(m<c){
            ct+=1;
        }
    }
    if(mt>ct){
        printf("Mishka");
    }
    else if(mt<ct){
        printf("Chris");
    }
    else if(mt=ct||mt==0||ct==0){
        printf("Friendship is magic!^^");
    }
    return 0;
}