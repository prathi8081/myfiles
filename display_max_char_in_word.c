#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int a[100]={0},max=-1,ind;
    for(int i=0;i<strlen(str);i++)
    {
        a[str[i]-'a']++;
    }
    for(int i=0;i<100;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            ind=i;
        }
    }
    printf("%c",ind+97);
    return 0;
}