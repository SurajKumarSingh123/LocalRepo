#include<stdio.h>
#include<string.h>
char* Trim(char str[]);


/*
//Triming Of String

int main(){
int k,i,j,l,m=0;

    char str[50];

   char sta[50];

  printf("Enter the  string\n");

  fgets(str,50,stdin);

for(i=0;str[i]!='\0';i++);

str[i-1]='\0'; //Putting null character at last value:

l=i-1; //Length Of String:

for(j=0;str[j]==' ';j++); //Finding non Space Character from Start: 

//  n=l-1;

for(l=i-2; str[l]==' ';l--); //Trimming From trailing:

for(k=j;k<=l;k++){
    //Coping Of character from start to new Array After trimming from start s to end :
   sta[m]=str[k];
   m++;
   }
  sta[m]='\0';

 printf("%s\n",sta);
 printf("\n");

 if(strlen(sta)>=1)
    printf("Length of Trimmed String is:%d",strlen(sta));
 else 
     printf("All are Space Character So length is [zero]");
 
 return 0;
}
*/

// Trim Usng function

char* Trim(char str[]){
int k,i,j,l,m=0;

//    char str[50];
//    char sta[50];

//   printf("Enter the  string\n");
//   fgets(str,50,stdin);

for(i=0;str[i]!='\0';i++);

str[i-1]='\0'; //Putting null character at last value:

l=i-1; //Length Of String:

for(j=0;str[j]==' ';j++); //Finding non Space Character from Start: 

//  n=l-1;

for(l=i-2; str[l]==' ';l--); //Trimming From trailing:

for(k=j;k<=l;k++){
    //Coping Of character from start to new Array After trimming from start s to end :
   str[m]=str[k];
   m++;
   }
  str[m]='\0';
  

 printf("%s",str);
 printf("\n");

//  if(strlen(sta)>=1)
//     printf("Length of Trimmed String is:%d",strlen(sta));
//  else 
//      printf("All are Space Character So length is [zero]");
 
 return str;
}

int countWords(char words[]){
    int i,j=0;
    Trim(words);
    for(i=0;words[i];i++)
     if(words[i]==' ')
          j++;
    return j+1;

}



int main(){
    // char a[50];
    // // char a[50];
    // printf("%s\n",Trim(a));
    // printf("Length of Trimmed String is: %d",strlen(a));
    

// Trim
    char words[100];
    int j;
    fgets(words,100,stdin);
    for(j=0;words[j];j++);
    printf("Number Of Words is %d",countWords(words));

     
    return 0;
}

