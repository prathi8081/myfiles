
#include <stdio.h>


int main() 

{
    char str[29];

    scanf("%[^\n]s",&str);
  
  int length = strlen(str); 
  
 

   // Traverse string from end 

    int i; 
   
 for (i = length - 1; i >= 0; i--)
 { 
     
   if (str[i] == ' ')
 { 
  
          
  // putting the NULL character at the 
 
            // position of space characters for 
 
           // next iteration.          
  
          str[i] = '\0'; 
  
     
       // Start from next charatcer    
  
            printf("%s ", &(str[i]) + 1); 
 
       } 
  
  } 
  
 
   // printing the last word 

    printf("%s", str);

}