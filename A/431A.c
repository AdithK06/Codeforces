#include<stdio.h>
#include<string.h>
int main(){
    int a1,a2,a3,a4,cal=0;
    char box[100000];
    scanf("%d %d %d %d\n",&a1,&a2,&a3,&a4);
    scanf("%s",box);
    
    for(int i=0;i<strlen(box);i++){
        if(box[i]=='1'){
            cal+=a1;
        }
        else if(box[i]=='2'){
            cal+=a2;
        }
        else if(box[i]=='3'){
            cal+=a3;
        }
        else if(box[i]=='4'){
            cal+=a4;
        }
    }
    printf("%d",cal);
    return 0;
}