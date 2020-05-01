#include <stdio.h>

int main()
 
{
 

char s[20] ;
  
 scanf("%s",s);
  
 int score=0;
  
 int n = strlen(s);
 

  for (int j = 0; j < n; j++) 

        { 
           
 score += s[j] - 'a' + 1;
  
      } 
   

 printf("%d",score);

}