#include<stdio.h>
int main()
{
    int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   int num=0;
   for(int i=0;i<n;i++)
   {
       num=num ^ a[i];
   }
   printf("%d",num);
   return 0;
}
