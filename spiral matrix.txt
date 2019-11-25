#include<stdio.h>
main()
{
    int i, k = 0, l = 0,m=5,n=5,count=25,a[10][10];
 
/* 
        k - starting row index 
        m - ending row index 
        l - starting column index 
        n - ending column index
*/
      while (k < m && l < n) { 
        
        for (i = l; i < n; ++i) { 
          a[k][i]=count--; 
         
        } 
        k++; 
  
        
        for (i = k; i < m; ++i) { 
            a[i][n - 1]=count--; 
           
        } 
        n--; 
  
        
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                 a[m - 1][i]=count--; 
                
            } 
            m--; 
        } 
  
       
        if (l < n) 
        { 
            for (i = m - 1; i >= k; --i) { 
                a[i][l]=count--; 
                
            } 
            l++; 
        } 
    } 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("  %2d  ",a[i][j]);
        }
    printf("\n");
        
    }
}