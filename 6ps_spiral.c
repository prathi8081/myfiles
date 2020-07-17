#include <stdio.h> 
void spiralPrint(int total_row, int total_col, int a[total_row][total_col]) 
{ 
    int i, start_row = 0, start_col= 0; 
    while (start_row < total_row && start_col < total_col) {
        for (i = start_col; i < total_col; ++i)  
            printf("%d ", a[start_row][i]); 
        start_row++; 
        for (i = start_row; i < total_row; ++i)  
            printf("%d ", a[i][total_col - 1]); 
        total_col--; 
        if (start_row < total_row) { 
            for (i = total_col - 1; i >= start_col; --i)  
                printf("%d ", a[total_row - 1][i]); 
            total_row--; 
        }
        if(start_col<total_col)
        {
            for(i=total_row-1;i>=start_row;--i)
                printf("%d ",a[i][start_col]);
            start_col++;-+
        }
         
    } 
} 
int main() 
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    spiralPrint(row,col, a); 
    return 0; 
}