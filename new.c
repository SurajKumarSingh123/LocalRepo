#include<stdio.h>
int main(){
    int i=10;
    int j=10;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            if(j>=i && j<=10){
                printf("%d",i);
                }
            else{
             printf(" ");
            }
        }
        printf("\n");
        
    }
    return 0;

}