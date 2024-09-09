// #include<stdio.h>

// int main(){
//     int k,p,num,i=0;
    
//     int w=0;
//     printf("Enter The  Number\n");
//     scanf("%d",&num);
//     int x=num;
//     while(x){
//         x=x/10;
//         i++;
//     }
//     p=num;
//     while(p){
//         x=p%10;
//         int z=1;
//          for(k=1;k<=i;k++){
//             z=x*z;
            
//          }
//          w=w+z;
//          p=p/10;
//     }

//  return num==w? printf("%d Is Armstrong Number",num):printf("%d Is  Not Armstrong Number",num);
 
// }



int Armstrong(int num){
    int k,p,i=0;
    
    int w=0;
    // printf("Enter The  Number\n");
    // scanf("%d",&num);
    int x=num;
    while(x){
        x=x/10;
        i++;
    }
    p=num;
    while(p){
        x=p%10;
        int z=1;
         for(k=1;k<=i;k++){
            z=x*z;
            
         }
         w=w+z;
         p=p/10;
    }
     return(num==w)?1: 0;
     

     

//  return num==w? printf("%d Is Armstrong Number",num):printf("%d Is  Not Armstrong Number",num);
 
}



