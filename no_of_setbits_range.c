// no of set-bits in for all numbers between a and b (both inclusive)
#include <stdio.h>
int main() {
    int q;
    scanf("%d",&q);
    for(int o=0;o<q;o++)
    {
        int cnt=0, a,b;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            int m=i;
            while(m)
            {
                cnt+=(m&1);
                m=m>>1;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
