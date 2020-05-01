

#include <stdio.h>


int main()

{
    
int a[10]={2000,500,200,100,50,20,10,5,2,1}; 

    int b[10]={0},n,i;
 
   scanf("%d",&n);
   
 while(n>0)
   
 {
       
 for(i=0;i<10;i++)
 
       {
     
       if(n-a[i]>=0)
 
           {
  
              n=n-a[i];
   
             b[i]=b[i]+1;

            
            }
  
      }
  
  }
  
  i=0;
  
  while (i<10)
 
    {
       
 if(b[i]!=0)
    
        printf("%d %d\n",a[i],b[i]);
 
       i++;
   
 }
   
 return 0;

}