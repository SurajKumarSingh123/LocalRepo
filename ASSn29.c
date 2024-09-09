#include<stdio.h>
// Greatest number in 10 digit

int main(){
int i,j=0;
int k=0;
int a[10];

for(i=0;i<10;i++)
    scanf("%d",&a[i]);
for(i=0;i<10;i++){
    if(a[i]>=0){
        if(a[i]>=j)
           j=a[i];
        }
    if(a[i]<0){
        if(a[i]>k)
         k=a[i];
       }     
    }
    printf("%d",(k>j)?j:k);
    
    return 0;
}


// Here's the corrected code:

/*
#include <stdio.h>

int main() {
    int i, j = 0;
    int k = 0;
    int a[10];

    // Input
    for (i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }

    // Processing
    for (i = 0; i < 10; i++) {
        if (a[i] >= 0) {
            if (a[i] > j)
                j = a[i];
        }
        if (a[i] < 0) {
            if (a[i] > k)
                k = a[i];
        }
    }

    printf("%d", (k > j) ? k : j);
    return 0;
}


// In this code, the processing part starts from i = 0 and goes up to i < 10, which is the correct range for the array a[10]. This ensures that all elements in the array are processed correctly.*/