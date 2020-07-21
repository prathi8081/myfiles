/*The function deleteDuplicate(int* arr,int len) takes an array arr of length len ( len>0 ) as an input. It is supposed to remove duplicate integers from the input array arr such that for each distinct integer , the first occurence is retained and all duplicate elements following it are removed . For example given the input array arr (2, 3, 2, 2, 5, 6, 6, 7}, the expected output is { 2, 3, 5, 6, 7 }*/
#include <stdio.h>
int count=0;
int a[100],b[100];
void deleteDuplicate(int n){
/*int j=0,flag=0;
b[j]=a[0];
j+=1;
for(int i=1;i<n;i++)
{
    flag=0;
    for(int k=0;k<=j;k++)
    {
        if(a[i]==b[k])
        {
            flag=1;
            break;
        }        
    }
    if(flag==0)
    {
        b[j]=a[i];
        j+=1;
    }
}
    count=j;
    */
    
    
int c,d;
  for (c = 0; c < n; c++)
 {
  for (d = 0; d <n; d++)
  {
   if(a[c] == b[d])
    break;
  }
  if (d > count)
  {
   b[count] = a[c];
   count++;
  }
 }
}
int main()
{
  int n, c;
  scanf("%d", &n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);
 
  deleteDuplicate(n);
  for (c = 0; c < count; c++)
    printf("%d ", b[c]);
 
  return 0;
}