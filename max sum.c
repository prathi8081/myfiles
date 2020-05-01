#include <stdio.h>


int main()
{
  
 int n,a[10],i,first,second;
  
 scanf("%d",&n);
 
  for(i=0;i<n;i++)
   
{
       scanf("%d",&a[i]);
 
  }
  
 if(a[0]>a[1])

   {
  
   first=a[0];
   
  second=a[1];
  
 }
   
else
   {
 
 

  first=a[1];
  
  second=a[0];
  
 }
  
 for(i=2;i<n;i++)
 
  {
      
 if(a[i]>first)
   
    {
       
 second=first;
   
     first=a[i];
    
   }
     
  if(a[i]>second && a[i]!=first)
 
      {
        second=a[i];
     
  }
  
 }
  
 printf("%d ",first+second);

}