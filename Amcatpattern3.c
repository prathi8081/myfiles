/*Programming Pattern to Print 2*N Number of rows for input Pattern?
3
44
555
6666
555
44
38
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",m);
        m++;
        printf("\n");
    }
    m-=2;
    for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
            printf("%d",m);
        m--;
        printf("\n");
    }
    return 0;
}