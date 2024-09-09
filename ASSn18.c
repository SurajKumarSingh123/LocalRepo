#include<stdio.h>

// int main(){
//    int i=4;
//    printf("Enter The Number");
// //    scanf("%d",&i);
//     printf("iuhdef%d",*i);
//     return 0;
// }



// Q=8
// int main(){
//  int i=4;
//  int j=4;
//  int k=1;
//  for(i=1;i<=4;i++){
//     for(j=1;j<=4;j++){

//         if(j<=i){
//          printf("%d ",k);
//          k=k+1;
//          }
//         else
//          printf(" ");

//     }
    

//     printf("\n");
    
//  }
//  return 0;

// }

// A18.8
// int main(){
//    int i=4;
//    int j=4;
//    for(i=1;i<=4;i++){
//       for(j=1;j<=7;j++){
//          if(j<=5-i||j>=i+3)
//             printf("*");
//          else
//             printf(" ");
//       }
//       printf("\n");
//    }
//    return 0;
// }


// Q.9

// int main(){
//    int i=4;
//    int j=4;
//    int k=0;
//    for(i=1;i<=4;i++){
//       for(j=1;j<=7;j++){
//          if(j<=5-i||j>=i+3){
//             if(j<=5-i){
//               k++;
//               printf("%d",k);
//               }
//             else{
//                if(i==1&&j==5){
//                   k=k-1;
//                   printf("%d",k);
//                   k=k-1;
//                }
//                else{
//                  if (j>=i+2){       
//                printf("%d",k);
//                  k=k-1;
                 
//                 }
//                }
//             }
            
//          }
            

//          else
//             printf(" ");
//       }
//       printf("\n");
//       k=0;
//    }
//    return 0;
// }



// Q10

int main(){
   int i=4;
   int j=4;
   char k='A'-1;
   for(i=1;i<=4;i++){
      for(j=1;j<=7;j++){
         if(j<=5-i||j>=i+3){
            if(j<=5-i){
              k++;
              printf("%c",k);
              }
            else{
               if(i==1&&j==5){
                  k=k-1;
                  printf("%c",k);
                  k=k-1;
               }
               else{
                 if (j>=i+2){       
               printf("%c",k);
                 k=k-1;
                 
                }
               }
            }
            
         }
            

         else
            printf(" ");
      }
      printf("\n");
      k='A'-1;
   }
   return 0;
}

