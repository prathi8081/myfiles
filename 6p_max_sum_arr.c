/*
Input
8
-2 -3 4 -1 -2 1 5 -3
output
7*/

#include <stdio.h>
#include<stdlib.h>
int fun(int *arr,int n)
{
    int max=arr[0],cur=0;
    for(int i=0;i<n;i++)
    {
        cur+=arr[i];
        if(cur>max)
            max=cur;
        else if(cur<0)
            cur=0;
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",fun(arr,n));
    return 0;
}
