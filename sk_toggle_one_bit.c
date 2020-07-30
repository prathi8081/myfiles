#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int o=n;
    int arr[32],ind=-1;
    while(n>0)
    {
        arr[++ind]=n%2;
        n/=2;
    }
    while(ind>=0)
    {
        if(arr[ind]==0)
        {
            printf("%d",o+(1<<ind));
            return 0;
        }
        ind--;
    }
    printf("%d",o);
    return 0;
}
