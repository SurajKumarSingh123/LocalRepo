#include<stdio.h>
#include <stdint.h>

// int main()
// {
//     int a;
//     int b;
//     printf("Enter The Two number");
//     scanf("%d%d",&a,&b);
//     printf("%d+%d=%d",a,b,a+b);
//     return 0;
// };


// 1

// int main(){
//     printf("\"MySirG\"");
// }

//4

// int main()
//  { 
//     printf("\\r");
//     return 0;
// }



// 8

// int main(){
//     int a,b;
//     printf("Enter The First Number\n");
//     scanf("%d",&a);
//     printf("Enter The Second Number\n");
//     scanf("%d",&b);
//     printf("%d",a+b);
// }


// int main(){

//     printf("Enter The First Number\n");
//     int l;
//     scanf("%d",&l);
//     int b;
//     printf("Enter The Second Number\n");
//     scanf("%d",&b);
//     printf("Area of Rectangle is %d",l*b);
//     return 0;
// }





// int main(){

//     printf("suraj\asumitrf");
// }






// A2
// Simple interest

// int main(){

//     int p;
//     printf("Enter The First Princple\n");
//     scanf("%d",&p);
//     int r;
//     printf("Enter The Rates\n");
//     scanf("%d",&r);
//     int t;
//     printf("Enter The Time\n");
//     scanf("%d",&t);
//     int si=p*r*t/100;
//     printf("Simple Interest is %d",si);
//     return 0;


// }

// int main(){
//     int x=5,y;
//     y=x++;
//     printf("%d %d\n",x,y);
//     printf("hel\rstudents");
//     int z=5.9;
//     printf("\n%d",z);
//     int p=13 % 4;
//     printf("\n%d",p);
//     return 0;
// }

// A2.6

// int main(){

//     char m;
//     printf("Enter The Character Constant\n");
//     scanf("%c",&m);
//     printf("%d",m);
//     return 0;
// }


// A2.7

// int main(){
//     // int a;
//     // printf("Enter The Number For its Ascii code\n");
//     // scanf("%d",&a);
//     // printf("Ascii code is=%c",a);

//     int z;
//     scanf("%d",&z);
//     printf("Ascii value is=%c",z);
//     return 0;

// }


// A4.4
// swap of number

// int main(){
//     int a=6,b=5,c;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d%d",a,b);
//     return 0;
// }


// // int main(){
// //     int a=~5;
// //     printf("%d",a);
// //     return 0;

// }



// A5

// int main(){

//     char c='+';
//     printf("%d",c);
//     return 0; 
// }


// A5.4
// int main(){
//     int x;
//     printf("Enter teh number\n");
//     scanf("%d",&x);
//     int z=x%10/10;
//     printf("%d",z);
//     return 0;
// }



// A8.7

// int main(){
// int a,b,c;
// scanf("%d%d%d",&a,&b,&c);
// if(a>b)
// printf("%d",a);
// if(b>c)
// printf("%d",b);
// else
// printf("%d",c);
// return 0;

// }


// A14
// Q=Factorial

// int main(){
//     int n;
//     printf("Enter The Number\n");
//     scanf("%d",&n);
//     int s=1;
//     for(int i=1;i<=n;i++){
//         s=s*i;
//     }
//     printf("Factorial of %d is %d",n,s);
//     return 0; 
// }


// Q=Count the Digit

// int main(){
//     int x;
//     printf("Ente The Number\n");
//     scanf("%d",&x);
//     int j=0;
//     for(int i=1;i>=1;i++){
//         x=x/10;
//           if(x==0)
//              break;
//           else
//              j=j+1;
//     }
//     printf("Number of digit is %d",j+1);
//     return 0;
// }





// Q=Lcm


// int main(){
// int x,y;
// printf("Enter The First Number\n");
// scanf("%d",&x);
// printf("Enter The Second Number\n");
// scanf("%d",&y);
// int z;
// for(int i=1;i>=1;i++){
// if(x<y){
//     z=x*i;
//       if(z%y==0){
//            printf("lcm is %d and %d is %d ",x,y,z);
//            break;
//           }
//       }
//       else{
//         z=y*i;
//          if(z%x==0){
//             printf("Lcm is %d and%d is %d",x,y,z);
//             break;
//          }
//       }
//   }
//     return 0;
// }




// Q=Reverse

// int main(){
//     int x;
//     printf("Enter The Number");
//     scanf("%d",&x);
//     int z;
//     for(int i=1;i>=1;i++){
//        z=x%10;
//        x=x/10;
//        printf("%d",z);
//          if(x==0)
//            break;
//     }
//     return 0;
  
// }

// Q=Reverse

// int main(){
//  int x,z,s=0;
//  printf("Enter The Number\n");
//  scanf("%d",&x);
//  while(x){
//     z=x%10;
//     x=x/10;
//     s=s*10+z;
//     }
//     printf("Reverse Number is %d",s);
//     return 0;
// }



// A15 Next prime Number

// int main(){
//     int x;
//     printf("Enter The Number");
//     scanf("%d",&x);
//     int z;
//     while(x){
//         for(int i=2;i<x+1;i++){
//             z=(x+1)%i;
//                  if(z==0)
//                      break;
//         }
//         if(z!=0){
//             printf("Next prime number is %d",x+1);
//             break;
//         }
//         x=x+1;
//     }

// }


// Q=hcf

// int main(){
// int a,b,min;
// printf("Enter The Number\n");
// scanf("%d%d",&a,&b);
//  for(min=a<b?a:b;min>=1;min--)
//         if(a%min==0 && b%min==0)
//             break;
        
//    printf("HCF is %d",min);
//    return 0;
// }




// Switch case:


// int main() {
//     int number = 4;
//  switch (number) {
//         default:
//             printf("Default case executed\n");
//             // break;

//         case 1:
//             printf("Case 1 executed\n");
//             break; 

//         case 2:
//             printf("Case 2 executed\n");
//             break;

//         case 3:
//             printf("Case 3 executed\n");
//             break;
//     }
//     return 0;
// }


// LCM
/*
int main(){
  long long int a,b,max;
 printf("Enter The Number");
 scanf("%lld %lld",&a,&b);
max=a>b?a:b;
while(1){
    if(max%a==0&&max%b==0){
      printf("Lcm is %lld",max);
      break;}
  max++;
}
return 0;
}
*/

// Duiplicate value in The array

int main(){
  int k,i,j,n;
  printf("Enter The size of array\n");
  scanf("%d",&n);
  int a[n];
  
  printf("EnterThe Number\n");
  for(k=0;k<n;k++){
   scanf("%d",&a[k]);}

  for(j=0;j<n;j++){
    int count=0;

     for(i=0;i<n;i++){
         if(i==j){
            continue;
            }
       
  
      else{
        if(a[j]==a[i]&&i<j){
          break;
        
        }
        else {
          if(a[j]==a[i]&&i>j)
          count++;
          // continue;
        }
      }}
   if(count>0)
  printf("%d is duplicate ocuur%dtinmes\n",a[j],count+1);
          
  }
  return 0;

}


