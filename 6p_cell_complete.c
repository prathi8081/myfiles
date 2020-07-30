#include<stdio.h>
void cell_compete(int *arr,int days)
{
    int nextprev,prev,i;
    while(days--)
    {
        prev=0;
        for(i=0;i<7;i++)
        {
            nextprev=arr[i];
            arr[i]=prev^arr[i+1];
            prev=nextprev;
        }
        arr[i]=prev^0;
    }
}
int main()
{
    int arr[8],days,i;
    for(i=0;i<8;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&days);
    cell_compete(arr,days);
    for(i=0;i<8;i++)
        printf("%d ",arr[i]);
}