#include<stdio.h>
#include<string.h>
 
int main(){
    int n,sum=0;
    char shape[20];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        
        scanf(" %s",shape);
        
        if(strcmp(shape,"Tetrahedron")==0){
            sum+=4;
        }
        else if(strcmp(shape,"Cube")==0){
            sum+=6;
        }
        else if(strcmp(shape,"Octahedron")==0){
            sum+=8;
        }
        else if(strcmp(shape,"Dodecahedron")==0){
            sum+=12;
        }
        else if(strcmp(shape,"Icosahedron")==0){
            sum+=20;
        }
    }   
    printf("%d",sum);
    return 0;
}