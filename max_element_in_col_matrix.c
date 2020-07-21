#include <stdio.h>
#include<limits.h>
int main()
{
    int row,col,i,j,arr[100][100];
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<col;i++)
    {
        int min=INT_MAX;
        for(int j=0;j<row;j++)
        {
            if(arr[j][i]<min)     //change row value keeping col value constant
                min=arr[j][i];
        }
        printf("%d\n",min);
    }
    return 0;
}
