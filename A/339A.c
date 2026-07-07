#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100],fin[100];
    int c[100],temp=0,k=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(isdigit(str[i])){
            c[k++]=str[i];
        }
    }
    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++) {
            if (c[j]>c[j+1]) {
                temp=c[j];
                c[j]=c[j + 1];
                c[j+1]= temp;
            }
        }
    }
    for(int i=0;i<k;i++){
        printf("%c",c[i]);
        if(i!=k-1)
        printf("+");
    }
    return 0;
}
