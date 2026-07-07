#include<stdio.h>
int main(){
    int red,blue,diff=0,left=0,same=0;
    scanf("%d %d",&red,&blue);
    if(red<blue){
        diff=red;
        left=blue-red;
    }
    else if(blue<red){
        diff=blue;
        left=red-blue;
    }
    else{
        diff=red;
    }
    same=left/2;
    printf("%d %d",diff,same);
    return 0;
}