/*
Given text comprising of words and numbers, sort them both in ascending order and print them in a manner that a word is followed by 
a number. Words can be in upper or lower case. You have to convert them into lowercase and then sort and print them.
Input Format:
First line contains total number of test cases, denoted by N
Next N lines, each contains a text in which words are at odd position and numbers are at even position and are delimited by space
Output Format:
Words and numbers sorted in ascending order and printed in a manner that a word is followed by a number.
Constraints:
1. Text starts with a word
2. Count of words and numbers are the same.
3. Duplicate elements are not allowed 
4. Words should be printed in lower case. 
5. No special characters allowed in text.
Input
2
Sagar 35 sanjay 12 ganesH 53 ramesh 19
Ganesh 59 suresh 19 rakesh 26 laliT 96	
Output
ganesh 12 ramesh 19 sagar 35 sanjay 53
ganesh 19 lalit 26 rakesh 59 suresh 96
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void fun(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
}
int strcomp(char *str1, char *str2)
{
    int i;
    for(i=0;str1[i]==str2[i];i++);
    if(str1[i]<str2[i])
        return 0;
    else
        return 1;    
}
void strcopy(char *dest, char *src)
{
    int i;
    for(i=0;src[i]!='\0';i++)
        dest[i]=src[i];
    dest[i]='\0';
}
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        int num[100],j=0;
        char ch,word[10][100];
        while(1)
        {
            scanf("%s %d%c",word[j],&num[j],&ch);
            fun(word[j]);
            j++;
            if(ch=='\n')
                break;
        }
        for(int z=0;z<j-1;z++)
        {
            for(i=0;i<j-1;i++)
            {
                if(num[i]>num[i+1])
                {
                    temp=num[i];
                    num[i]=num[i+1];
                    num[i+1]=temp;
                }
            }
        }
        for(int z=0;z<j-1;z++)
        {
            for(i=0;i<j-1;i++)
            {
                if(strcomp(word[j],word[j+1])==1)
                {
                    char temp[100];
                    strcopy(temp,word[i]);
                    strcopy(word[i],word[i+1]);
                    strcopy(word[i+1],temp);
                }
            }
        }
        for(i=0;i<j;i++)
          printf("%s %d ",word[i],num[i]);
        printf("\n");
    }
    return 0;
} 