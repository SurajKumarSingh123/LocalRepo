#include<stdio.h>


//  void input(int b[],int n);
/*
int main(){
    int a[5],sum=0;
    printf("Enter The  values\n");
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    printf("Sum is%d",sum);
}
*/



/*
int main(){
    int a[4]={3,2,1,4};
    input( a,3);
    return 0;

}



void input(int b[],int n){
  int i;
  
  int k=2;
  while(k){
  for (i=0;i<=n-1;i++){
    if(b[i]<b[i+1])
        b[i]=b[i];
        b[i+1]=
    else
       b[i]=b[i+1];
        }
        k--;
  }
  printf("Sorted Array Is\n");
  for (i=0;i<=3;i++)
    printf("%d ",b[i]);
}
*/



int main(){
  int n;
  printf("Enter The value\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter The Number\n");
  printf("Input:");
  for(int i=0; i<n; i++) {
    scanf(" %d", &a[i]); // Note the space before %d
}

  printf("a[%d] = ",n);
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  return 0;
}