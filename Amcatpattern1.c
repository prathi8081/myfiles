/*
input : 5
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/
#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int k=1;
    for(int i=0;i<n;i++)
    {
        if((i&1)==1)
        {
            int g=k+i;
            for(int j=0;j<=i;j++)
            {
                printf("%d",g--);
                if(i!=j)
                    printf("*");
                k++;
            }

        }
        else
        {
            for(int j=0;j<=i;j++)
            {
                printf("%d",k++);
                if(i!=j)
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}