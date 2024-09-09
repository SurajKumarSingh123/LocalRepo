#include <stdio.h>
#include <string.h>


// First charcter of first string

/*
int main(){
char *str[]={"my coountry is India",
              "I like Computer",
              "My father is champion",
              "dhoni is a good Cricket player",
              "Cricket is a wonderful game",
              "Game should be played Everyday"};
printf("%c",str[0][0]);
return 0;
}
*/




int main(){
    int p,i,j;
    int count=0;
char str[5][30]={"my coountry is India",
              "I like Computer",
              "My father is champion",
              "dhoni is a good Cricket player",
              "Cricket is a wonderful game",
              "Game should be played Everyday"};
char stm[30];
char sta[3][30]={"Game","Cricket","is"};
for(int k=0;k<3;k++){
  for(i=0;i<6;i++){
    p=0;
      for(j=0;j<strlen(str[i]);j++){
         
         stm[p++]=str[i][j];

       if(str[i][j]==' '||j==strlen(str[i])-1){
            stm[p] = '\0';
         
          if(stm==sta[k])
            count++;
          else
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






