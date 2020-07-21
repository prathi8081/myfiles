#include<stdio.h>
int main()
{
char str[200] , ch;
int ind , count;
scanf("%s" , str);
int len , start;
for(len=0 ; str[len] ; len++);
start=len ;
ind=count=0;
while( ind < len )
{
    ch = str[ind++];
    while(str[ind] >= '0' && str[ind] <= '9' )
        count = count * 10 + (str[ind++] - '0');
    while(count)
    {
        str[start++] = ch;
        count--;
    }
}
for(ind=len ;ind < start ;ind++)
    str[ind - len]=str[ind];
str[ind - len] = 0;
printf("%s" , str);
return 0;
}
