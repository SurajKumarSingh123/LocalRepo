#include<stdio.h>
#include "Assign23.c"
#include "Assign22.c"
//Q1
void printPrimeBetweenTwoNumbers(int a,int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        if(isPrime(x))
            printf("%d ",x);
    }
}
//Q2
void printFib(int n)
{
    int a=-1,b=1,c;
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}
//Q3
void printPascal(int lines)
{
    int i,j,flag,n,r;
    for(i=1;i<=lines;i++)
    {
        flag=1;
        n=i-1;
        for(j=1,r=0;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(flag)
                    printf("%d",combi(n,r++));
                else
                    printf(" ");
                flag=1-flag;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

//Q4
int isArmstrong(int num)
{
    int x,d,digit,p,i,sum=0;
    
    //Find number of digits
    x=num;
    d=0;
    while(x)
    {
        x=x/10;
        d++;
    }
    //Find sum of d power of all the digits
    x=num;

    while(x)
    {
        digit=x%10;
        x=x/10;
        //Calculate digit power d
        for(p=1,i=1;i<=d;i++)
            p=p*digit;
        
        sum=sum+p;
    }
    if(sum==num)
        return 1;
    else
        return 0;

}
void printArmstrong(int a, int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        if(isArmstrong(x))
            printf("%d ",x);
    }
}

//Q5
int calculateSum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+fact(i-1);
    }
    return sum;
}

int main()
{
    printArmstrong(100,1000);
    printf("\n");
    return 0;
}