#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c],mul[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<r;k++)
            {
                mul[i][j]=mul[i][j]+(a[i][k]*a[j][k]);
            }
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
