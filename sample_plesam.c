/*
input
sample
plesam
output
1
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rotation(char *s1,char *s2)
{
    char *str=(char *)malloc(sizeof(s1)*2+1);
    strcat(strcpy(str,s1),s1);
    if(strstr(str,s2))
        return 1;
    return -1;
}
int main()
{
    char word1[1000],word2[1000];
    scanf("%s",word1);
    scanf("%s",word2);
    printf("%d",rotation(word1,word2));
}