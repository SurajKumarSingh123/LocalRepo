#include<stdio.h>
#include <string.h>

int main(){
/*
    char c='\n';
    printf("%c ",c);
    return 0;

    char a,b;
    scanf("%c %c",&a,&b);
    printf("%d\n%d",a,b);
    return 0;
*/


/*
    int x;
    printf("Enter The number");
    scanf("%d",&x);
    printf((x>0) ? "Positive Number":"Non Positive number");


    printf("int x=scanf("%d",&x);");
    return 0;

    int x,y;
    printf("Enter The First Number");
    scanf("5d",&x);
    printf("%d",x);
    scanf("%d",&y)
*/


/*x
    int n=5;
    while(n>=1){
        printf("MysirG\n");
        n=n-1;
    }
    return 0;
*/



 /*    
char x='a';
char y=x+1;
printf("%c",y);
return 0;
*/




/*
int x=x+1;
scanf("%d",&x);
printf("%d",x);
return 0;
*/



     
/*x

char x='d';
printf("%%%c",x);
return 0;

*/



// char str[10];
// scanf("%s",str);
// printf("%s",str);
// return 0;



    char str[20];
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0';  // Newline character ko remove karna
    printf("You entred:%s", str);
    int z=strlen(str);
    printf("length of string is\n%d ",z);
    return 0;
}


