#include<stdio.h>

// Sorted  Value In The Array

int main(){
 int a[5],i,r,t;
 for(i=0;i<=4;i++)
   scanf("%d",&a[i]);
for(r=1;r<=4;r++){
  for ( i = 0;i<=4-r;i++)
  {
    if(a[i]>a[i+1]){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }

  }}
  printf("%d\n",i);
  for(i=0;i<=4;i++)
    printf("%d ",a[i]);
  return 0;
}



// Descending order of array
/*
int main(){
 int a[5],i,r,t;
 for(i=0;i<=4;i++)
   scanf("%d",&a[i]);
for(r=1;r<=4;r++){
  for ( i = 0;i<=4-r;i++)
  {
    if(a[i]<a[i+1]){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }

  }}
  printf("%d\n",i);
  for(i=0;i<=4;i++)
    printf("%d ",a[i]);
  return 0;
}
*/