/*The method removeElement(int arr[],int element) of class ShortArray takes an array arr as an input.It is supposed to return an array removing the integer if it is present in the input array arr. If the given integer is not in the array, then this function should return the input array arr.
*/

#include<stdio.h> 
int deleteElement(int arr[], int n, int x) 
{
int i,flag=0;
for(i=0;i<n;i++)
{
    if(arr[i]==x)
    {
        flag=1;
        break;
    }
}
if(flag==1 && i!=n){
for(int j=i;j<n-1;j++)
{
    arr[j]=arr[j+1];
}
}
if(flag==1)
return n-1;
else
return n;
} 
int main() 
{ 
        int n;
        scanf("%d",&n);
	int arr[n];
        for(int i=0;i<n;i++){
                scanf("%d ",&arr[i]);
        }
	int x;
        scanf("%d",&x);
	n = deleteElement(arr, n, x); 
	for (int i=0; i<n; i++) 
	printf("%d ",arr[i] ); 

	return 0; 
} 