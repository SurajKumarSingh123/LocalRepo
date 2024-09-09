#include<stdio.h>
#include<string.h>

//1. lOWERCASE


int main(){
int n;
scanf("%d ",&n);
char str[n+1];
fgets(str,n+1,stdin);

for(int i=0;str[i];i++)
   printf("%c",str[i]+32);
printf("\n%s",str);
return 0;

}
