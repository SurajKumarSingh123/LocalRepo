#include<stdio.h>
// 1

// int main(){
//     int a=-1;
//     int b=1;
//     int n,z;
//     printf("Enter The Number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         z=a+b;
//         a=b;
//         b=z;
//     }
//     printf("%dth Fibonacci Number is%d",n,z);
//     return 0;
// }


// 2 First n tern of fibonacci

// int main(){
//     int a=-1;
//     int b=1;
//     int n,z;
//     printf("Enter The Number");
//     scanf("%d",&n);
//     printf("First %dth Fobonacci term is \n",n);
//     for(int i=1;i<=n;i++){
//         z=a+b;
//         a=b;
//         b=z;
//        printf("%d ",z);
//     }
//     return 0;
// }


// 3 number in the fibonaacci series

// int main(){
//     int a=-1;
//     int b=1;
//     int z,num;
//     printf("Enter The Number");
//     scanf("%d",&num);
//     for(int i=1;i>=1;i++){
//         z=a+b;
//         a=b;
//         b=z;
//         if(num==z){
//             printf("%d in Fibonacc Series at %dth term",num,i);
//             break;
//         }
//         if(z>num){
//             printf("%d is not in Fibonacci series",num);
//             break;
//         }

//     }
//     return 0;
// }


                       // A17.2

int main(){
    int i=1;
    int j=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=6-i)
             printf("*");
            else
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}

// 5

