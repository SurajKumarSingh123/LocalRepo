#include<stdio.h>
void PrintN(int n);
void PrintR(int n);
void oddN(int n);
void oddNR(int n);



int main(){
    PrintN(10);
    printf("\n");
    PrintR(10);
    printf("\n");
    oddN(10);
    printf("\n");
    oddNR(10);


    return 0;
}


// Q==1
 void PrintN(int n){
     if(n>0){
        PrintN(n-1);
        printf("%d ",n);
        
     }
       
}

// Q==2

void PrintR(int n){

    if(n>0){
        printf("%d ",n);
        PrintR(n-1);


    }
}

// Q==3

void oddN(int n){
    if(n>0){
        oddN(n-1);
        printf("%d ",2*n-1);
    }
}


// Q==4
void oddNR(int n){
    if(n>0){
        printf("%d ",2*n-1);
        oddN(n-1);
    }
}


