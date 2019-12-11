#include<stdio.h>
#include<math.h>
int main()
{
    int n,repeat;
    printf("Enter range : ");
   scanf("%d",&n);
   int a[n],sum=0;
   printf("Enter elements : \n");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    sum+=a[i];
   }
   int i=0;
   while(i!=n)
   {
   if(a[abs(a[i])]>=0)
    a[abs(a[i])]=-a[abs(a[i])];
  else
   { repeat=abs(a[i]);
    break;}
    i++;
   }
   printf("Repeated Element : %d\n",repeat);
    printf("Left-out Element : %d\n",repeat+((n*(n+1))/2)-sum);
    return 0;
}
