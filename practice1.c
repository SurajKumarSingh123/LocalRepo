
/*
#include <stdio.h>
#include <string.h>
// First charcter of first string


int main(){
  int i,j;
char str[6][19]={"my country is India"};
              // "I like Computer",
              // "My father is champion",
              // "dhoni is a good Cricket player",
              // "Cricket is a wonderful game",
              // "Game should be played Everyday"};
    i=0;
    for(j=0;str[i][j]!='\0';j++){
       printf("%c",str[i][j]);
       }
return 0;
}
*/

   

/*

#include<stdio.h>
#include<string.h>
int main(){
    int p,i,j;
    int count=0;
char str[6][40]={"my country is India",
              "I like Computer",
              "My father is champion",
              "dhoni is a good Cricket player Game",
              "Cricket is a wonderful Game",
              "Game should be played Everyday"};
char stm[30];
char sta[4][30]={"Game","dhoni","Cricket","is"};
for(int k=0;k<4;k++){
   count=0;
  for(i=0;i<6;i++){
    p=0;    
      for(j=0;j<=strlen(str[i]);j++){
         
         stm[p++]=str[i][j];

         if(str[i][j]==' '||j==strlen(str[i])){ 
            stm[p-1] ='\0';
            
            if(strcmp(stm, sta[k]) == 0){
            count++;
             }
          p=0;
          }
        } 
      }
   if(count>=0)
        printf("%s occurs at %d times\n",sta[k],count);
   else
         printf("%s occurs at Zero  times\n",sta[k]);
    }
 return 0;
 
 }
 
*/



/*

#include<stdio.h>
#include<string.h>

int main(){
    int p,i,j;
    int count;
    char str[6][30] = {
        "my country is India",
        "I like Computer",
        "My father is champion",
        "dhoni is a good Cricket player",
        "Cricket is a wonderful Game",
        "Game should be played Everyday"
    };
    
    char stm[30];  // To store each word
    char sta[3][30] = {"Game", "Cricket", "is"};  // Words to search for

    // Loop through each word in sta[]
    for(int k = 0; k < 3; k++) {
        count = 0;  // Reset count for each word in sta[]

        // Loop through each sentence in str[]
        for(i = 0; i < 6; i++) {
            p = 0;

            // Loop through each character in the sentence
            for(j = 0; j <= strlen(str[i]); j++) {

                stm[p++] = str[i][j];

                // Check if we've reached the end of a word (space or end of sentence)
                if(str[i][j] == ' ' || str[i][j] == '\0') {
                    stm[p - 1] = '\0';  // Null terminate the word

                    // Compare the word with sta[k]
                    if(strcmp(stm, sta[k]) == 0) {
                        count++;  // Increment the count if they are equal
                    }

                    p = 0;  // Reset index for the next word
                }
            }
        }

        // Print the count for each word in sta[]
        printf("%s occurs %d times\n", sta[k], count);
    }

    return 0;
}


*/



/*
#include<stdio.h>
int main(){
    int b,n,j, a=4;
      b=n=j=a;
    printf("%d %d %d %d",a,b,j,n+a+b+j);
    return 0;
}*/

#include<stdio.h>
int main(){
    int a =9;
    int b =9;
    
    printf("%d",a+b);
    return 0;
}