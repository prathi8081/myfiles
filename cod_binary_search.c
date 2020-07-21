#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int x) 
{ 
int mid=(l+r)/2;
if(l>r)
    return -1;
if(arr[mid]==x)
    return mid;
else if(arr[mid]>x)
{
    binarySearch(arr,l,r-1,x);
}
else
{
    binarySearch(arr,l+1,r,x);
}
} 
int main(void) 
{ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	int x; 
    scanf("%d",&x);
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? printf("Element is not present"
							" in array") 
				: printf("Element is present at "
							"index %d", 
							result); 
	return 0; 
} 