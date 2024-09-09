#include<stdio.h>
 
int main(){

    // printf("Factorial is %d\n",fact(5));
    // printf("Combination is %d\n",combi(5,2));
    // printf("Permutation is %d\n",permu(5,2));
    // int k=Isdigitpresent(7,87988);
    // printf(k==1?"Number is present in the digit\n":"Number is not Present in The digit\n");
    primefact(10);
    return 0;
}
// Q2
int combi(int n,int r){
    return fact(n)/fact(n-r)/fact(r);
}
// Q3
int permu(int n,int r){
    return fact(n)/fact(n-r);
}
// Q1


int fact(int n){
    int z=1;
 while(n){
    z=n*z;
    n--;


 }
 return z;
}


// Q4


int Isdigitpresent(int num,int digit){
    int z;
   while(digit){
     z=digit%10;
      if(num==z)
        return 1;
     digit=digit/10; 

   }
   return 0;


}

// Q==5

 int primefact(int num)
 {
    for(int i=2;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
            num=num/i;
            i=1;
        }
        
    }
 return 1;
 }