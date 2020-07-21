/*
input:6
1111112
3222222
3333334
5444444
5555556
7666666
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if((i&1)==1)
        {
            for(int j=0;j<n;j++)
                printf("%d",i);
            printf("%d",i+1);
            
        }
        else
        {
            printf("%d",i+1);
            for(int j=0;j<n;j++)
                printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}