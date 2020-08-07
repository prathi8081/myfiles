/*
Bubble sort*/

#include<stdio.h>
#include<stdlib.h>
void bubble(int *arr,int n);
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void bubble(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubble(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}