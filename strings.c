#include<stdio.h>
#include<string.h>
/*
int main(){
    char str[7]={'B','H','O','P','A','L'};
    int i;
    printf("%s",str);
    for(i=0;i<=5;i++)
      printf("%c\n",str[i]);

    // printf/("\n%d",i);
    return 0;
}
*/



// Length of string;


/*
int main(){

    char str[10]="BHOPAL";
    int i;
    for( i=0;str[i];i++){
        // i=i+1;
    }
    printf("Length of string is %d",i);
    return 0;

}*/


// Input of string

// int main(){
//     char str[10];
//     printf("Enter The String");
//     scanf("%s",str);
//     printf("%s",str);
//     return 0;
// }




// Taking input From the user



/*
int main(){
 char str[10];
 int i;
 for(i=0;i<=4;i++){
    scanf("%c ",&str[i]);
    }
    str[i]='\0';
 printf("%s",str);
 return 0;
}
*/


// Grarbge Value



/*
int main(){
 char str[5]={'s','i','h','y','i'};
 
 int i;
 for(i=0;i<=4;i++)
    printf("%c",str[i]);
    
 str[5]='p';
 str[6]='\0';
 printf("\n%s",str);
 return 0;
}
*/

// fgets()
/*
int main(){

    char str[7];
    fgets(str,7,stdin);
    printf("%s",str);
     int z;
     z= strlen(str);
    printf("\n%d",z);
    return 0;
}
*/


// scanf


int main(){
    char str[9];
    scanf("%s",str);
    printf("%s",str);
    return 0;
}
