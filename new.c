#include<stdio.h>


/*
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

*/


int main(){
    int x[5]= {176,2,7,12,45};
    
    int *p;
      p=x;
    printf("%d",*(p+3));
    return 0;

}