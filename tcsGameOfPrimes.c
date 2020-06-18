/*Game of Primes
In a global Mathematics contest, the contestants are told to invent some special numbers which can be built by adding the squares of its digits. 
Doing this perpetually, the numbers will end up to 1 or 4.If a positive integer ends with 1, then it is called the Number of Game.
An example from above is:
13 = 1^2 + 3^2 = 1+9 = 10 (Step:1)
10 = 1^2 + 0^2 = 1+0 = 1 (Step:2), iteration ends in Step 2 since number ends with 1
Then in next round, the contestants are asked to combine their newly invented number, i.e. Number of Game with prime number.
Now, being a smart programmer, write a program to help the contestants to find out the Nth combined number within any given range, where N can be any integer.
Input Format:
Input Format
Input consists of 3 integers X, Y, N, one on each line. X and Y are upper and lower limits of the range. The range is inclusive of both X and Y. Find Nth number in range [X,Y].
X,where X is the upper limit of the rangeLine . Y,where Y is the lower limit of the rangeLine . N,where Nth element of the series is required
Constraints
X <= Y
X > 0
N > 0
Output Format
Output will show the Nth element of the combined series lying in the range between X and Y.
For Valid Input,print U,where U is the Nth element of the combined number series lying in the range between X and Y.
No number is present at this index
For Invalid Input,print Invalid Input
Sample Input
1
30
3
Sample Output
19
*/
#include<stdio.h>
int fun(int n)
{
    if(n==4)    
        return 4;
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum+=(r*r);
        n=n/10;
    }
    return sum;
}
main()
{
    int x,y,n,val,k=0,b[50];
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&n);
    int a[10000]={0},i,j;
    a[0]=a[1]=0;
    a[2]=1;
    for(i=3;i<10000;i+=2)
        a[i]=1;
    for(i=3;i<10000;i+=2)
    {
        if(a[i]==1)
        {
            for(j=i*i;j<10000;j+=i)
                a[j]=0;
        }
    }
    if(x>y)
        printf("Invalid Input");
    else
    {
        for(i=x;i<=y;i++)
        {
            val=i;
            while(1)
            {
                val=fun(val);
                if(val/10==0)
                    break;
            }
            if(val==1)
            {
                if(a[i]==1)
                {
                    b[k]=i;
                    k++;
                }
            }
        }
    }
    printf("%d",b[n-1]);
}