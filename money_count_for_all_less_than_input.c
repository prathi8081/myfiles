/*
 i tried a test data of 23, your output was 4 1 1
4 five rupee
1 two rupee
1 one rupee
with this configuration
you can make 
1 , 2, 3 but how will you make 4.
Hence the output is not appropriate. 
The selection of coin configuration has to make 1 to 23 for given N of 23.
*/
#include<stdio.h>
int five(int a){
    int k=a/5,l,m=0;
    for(l=0;l<k;l++)
    {
        m++;
    }
    return m;
}
int two(int b)
{
    int x=b/2,y,z=0;
    for(y=0;y<x;y++)
    {
        z++;
    }
    return z;
}
int main()
{
    int n,m=0,p,q,o,r,tp=0,tq=0,tr=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        p=five(i);
         o=i-(p*5);
        q=two(o);
        r=i-((p*5)+(q*2));
        if(p>tp)
            tp=p;
        if(q>tq)
            tq=q;
        if(r>tr)
            tr=r;
    }
    printf("%d no of 5, %d no  of 2, %d no of 1\n",tp,tq,tr);
    return 0;
}
