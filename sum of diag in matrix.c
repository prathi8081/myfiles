#include <stdio.h> 


int main()

{
  
int n,c,a[10][10],j,i,d1=0,d2=0;

  scanf("%d %d",&n,&c);
 
 for(i=0;i<n;i++)

  {
     
   for(j=0;j<c;j++)
   
         scanf("%d",&a[i][j]);

  }
  
for(i=0;i<n;i++)
  

{
    
  d1+=a[i][i];

      d2+=a[i][n-i-1];
 
 }

           
     printf("%d",d1+d2-a[n/2][n/2]);
  

    
}