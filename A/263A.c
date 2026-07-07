#include <stdio.h>
 
int main() {
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j] == 1) { 
                int m = 0;
            
                if(i==0||i==4){
                    m+=2;
                }
                if(i==1||i==3){
                    m+=1;
                }
                if(j==0||j==4){
                    m+=2;
                }
                if(j==1||j==3){
                    m+=1;
                }
                
                printf("%d\n",m);
                return 0;
            }
        }
    }
    
}