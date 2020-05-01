#include<stdio.h>
int main()
{
    int lim;
    scanf("%d",&lim);
    int a,b,c=0,m=2;
    while(c<lim)
    {
        for(int n=1;n<m;n++)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>lim)
                break;
            else
                printf("%d  %d  %d\n",a,b,c);
        }
        m++;
    }
    return 0;
}