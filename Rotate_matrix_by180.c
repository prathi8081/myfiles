#include<stdio.h>
int main(){
    int row,col,i,j,arr[100][100];
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=row-1;i>=0;i--)
    {
        for(j=col-1;j>=0;j--)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}