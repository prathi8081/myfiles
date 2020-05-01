#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int num,j,k=0,rem,l;
    char str[10];
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%26;
        if(rem==0)
        {
            str[k++]='Z';
            num=(num/26)-1;
        }
        else
        {
            str[k++]=(rem-1)+'A';
            num=(num/26);
        }
    }
        str[k]='\0';
        //strrev(str);
        //printf("%s\n",str);
        j=strlen(str);
        int end=j-1;
        char str1[10];
        for(l=0;l<j;l++)
        {
          str1[l]=str[end];end--;
        }
        
        str1[l]='\0';
        printf("%s",str1);
        
    
    return 0;
}
