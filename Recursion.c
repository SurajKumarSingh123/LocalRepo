#include<stdio.h>

int main(){
    
   int s=f1(scanf("%d",&n));
    
    return s;
}

int f1(int n){
      if(n==1){
         printf("%d",n);
         return 1;
         }
    printf("%d ",n);
     int k=f1(n-1);
    //  return k;

}