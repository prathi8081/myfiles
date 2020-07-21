#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y=n/365;
    int r=n%365;
    int w=r/7;
    int re=r%7;
    printf("Number of Years:%d\nNumber of Week:%d\nNumber of Days:%d\n",y,w,re);
    return 0;
}