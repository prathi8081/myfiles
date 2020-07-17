/*To print the pattern like
for n=3
the program should print
1 1 1 2
3 2 2 2
3 3 3 4
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if((i&1)==0)
            printf("%d",i+1);
        
            for(int j=1;j<=n;j++)
            printf("%d",i);
        if((i&1)==1)
            printf("%d",i+1);
        printf("\n");
    }
    return 0;
}