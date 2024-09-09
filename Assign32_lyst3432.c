#include<stdio.h>
void f1(int A[],int size,int index1,int index2)
{
    int t;
    if(index1<size && index2<size)
    {
        t=A[index1];
        A[index1]=A[index2];
        A[index2]=t;
    }
}
void sort(int A[],int size)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
            if(A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
    }
}
int countDuplicate(int A[],int size)
{
    int B[size],i=0,j=0,k=0;
    sort(A,size);
    B[j]=A[i];
    
    for(i=1,j=1;i<size;i++)
    {
        if(A[i]>A[k])
        {
            B[j]=A[i];
            j++;
            k=i;
        }
    }
    printf("Total number of duplicate elements are %d",size-j);
}
void uniqueElements(int A[],int size)
{
    int B[size],i=0,j=0,k=0;
    sort(A,size);
    B[j]=A[i];
    printf("%d ",B[j]);
    for(i=1,j=1;i<size;i++)
    {
        if(A[i]>A[k])
        {
            B[j]=A[i];
            printf("%d ",B[j]);
            j++;
            k=i;
        }
    }

}
void merge(int A[],int B[],int C[],int size )
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size && j<size;k++)
    {
        if(A[i]>B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        C[k]=B[j];
        j++;
        k++;
    }
}
void frequency(int A[],int size)
{
    int i,k,count=0;
    sort(A,size);
    for(i=0,k=0;i<size;i++)
    {
        if(A[i]==A[k])
            count++;
        else
        {
            printf("\n%d - %d",A[k],count);
            count=0;
            k=i;
            i--;
        }
    }
    printf("\n%d - %d",A[k],count);
}
int main()
{
    int A[]={3,5,2,3,2,1,5,5,3,3,2,6,9,1,2};
    frequency(A,15);
    
    printf("\n");
    return 0;

}