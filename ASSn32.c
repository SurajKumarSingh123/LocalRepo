#include<stdio.h>
// void Unique(int a[], int n);

// Duplicate number with ferquency

/*
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
         }
      }
   if(count>0)
  printf("%d is duplicate ocuur%dtinmes\n",a[j],count+1);
          
  }
  return 0;

}
*/


// Also Duplicate calculation with frequency


/*
#include <stdio.h>

int main() {
    int k, i, j, n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter the numbers:\n");
    for (k = 0; k < n; k++) {
        scanf("%d", &a[k]);
    }
    for (j = 0; j < n; j++) {
        int count = 0;
        for (i = 0; i < n; i++) {
            if (i != j && a[j] == a[i]) {
                if (i < j) {
                    break;
                } else {
                    count++;
                }
            }
        }
        if (count > 0) {
            printf("%d is duplicate, occurs %d times\n", a[j], count + 1);
        }
    } 
    return 0;
  }

*/



// Unique element

/*
 void Unique(int a[] ,int n){
 int i,j;
 printf("Unique Element Is: ");
   for (j = 0; j < n; j++) {
        int count = 0;
        for (i = 0; i < n; i++) {
            if(a[i]!=a[j] && i!=j){
                count++;
                if(count==n-1){
                 printf("%d ",a[j]); 
                }
             }
          }
       }
   }


int main(){
int n,k;
printf("Enter The Size of an Array");
scanf("%d",&n);
int a[n];
for(k=0;k<n;k++){
 scanf("%d",&a[k]);}
Unique(a,n);
return 0;

*/

// Transpose Of Matrix

int main() {
    int matrix[3][3], transpose[3][3];
    
    // Input matrix elements
    printf("Enter elements of the matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Print the transposed matrix
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}





