#include<stdio.h>
void ReverseEvenNumber(int n);
void SqureN(int n);

int main(){
    int k;
    printf("Enter The number\n");
    scanf("%d",&k);
    // ReverseEvenNumber(k);
     SqureN(k);
    return 0;
}


void ReverseEvenNumber(int n){
    
    if(n>=1){
      printf("%d ",2*n);
    ReverseEvenNumber( n-1);}
}

void SqureN(int n){
    if(n>=1){
        SqureN(n-1);
         printf("%d ",n*n);

    }
    // return 0;
}