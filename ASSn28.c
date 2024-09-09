#include<stdio.h>
void Fibonic( int n);
int cd( int n);
unsigned long long int fact(int n);
int main(){
     int n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    // Fibonic(n);
    // printf("%d",cd( n)) ;
     printf("%llu",fact( n)) ;

    return 0;
}
int Fib( int n){
    if(n==0||n==1)
      return n;
    return Fib(n-1)+Fib(n-2);
}

void Fibonic( int n){
    if(n>0){
       Fibonic(n-1);
       printf("%d ",Fib(n-1));
       
    }
}

int cd( int n ){
        if(n==0){
         return 0;}  
    return cd(n/10)+1;
}

unsigned long long int fact(int n){
   
       if(n==1)
        return 1;

    return n*fact(n-1);

}