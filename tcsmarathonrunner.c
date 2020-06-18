/*Race is generally organized by distance but this race will be organized by time. In order to predict the winner we will 
check every 2 seconds.Let’s say total race time is 7 seconds we will check for (7-1) seconds.
For 7 sec : we will check who is leading at 2 sec, 4 sec, and 6 sec.
Participant who is leading more number of times is winner from prediction perspective.
Now our task is to predict a winner in this marathon.

At particular time let say at 4th second, top two (top N, in general) participants are at same distance, then in this case both are 
leading we’ll increase count for both(all N).And after calculating at all time slices, if the number of times someone is leading, 
is same for two or more participants, then one who come first in input sequence will be the winner.If participant 2 and 3 are both
leading with same number, participant 2 will be the winner.

Constraints

1 <= T <= 100
1 <= N <= 100

Input Format

First line contains a single integer N denoting the number of participants.
Second line contains a single integer T denoting the total time in seconds of this Marathon.
Next N lines (for each participant) are as follows :

We have T+1 integers seperated by space.
First T integers are as follows :
ith integer denotes number of steps taken by the participant at the i-th second.
T+1st integer denotes the distance (in meters) of each step.

Output

Index of Marathon winner, where index starts with 1.

Test Case

Input

3
8
2 2 4 3 5 2 6 2 3
3 5 7 4 3 9 3 2 2
1 2 4 2 7 5 3 2 4

Output

2
*/

#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,t,max=0;
	scanf("%d",&n);
	scanf("%d",&t);
    int *lead,*count,**a,**d;
    lead=(int*)malloc(sizeof(int)*n);
    count=(int*)calloc(n,sizeof(int));
    a=(int**)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        a[i]=(int*)malloc(sizeof(int)*(t+1));
    d=(int**)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        d[i]=(int*)malloc(sizeof(int)*t);
    
	//int a[n][t+1],d[n][t],count[3],lead[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=t;j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t;j++)
		{
			if(j==0)
				d[i][j]=0+a[i][j]*a[i][t];
			else
				d[i][j]=d[i][j-1]+a[i][j]*a[i][t];
           // printf("%d ",d[i][j]);
		}
        //printf("\n");
	}
    int index;
    for(int j=1;j<t-1;j+=2)
    {
        index=1;
        for(int i=0;i<n;i++)
        {
            if(d[i][j]>max)
            {
                max=d[i][j];
                lead[0]=i;
            }
            else if(d[i][j]==max)
            {
                lead[index++]=i;
            }
        }
        for(int k=0;k<index;k++)
            count[lead[k]]++;
    }
    int winner;
    max=0;
    for(int i=0;i<n;i++)
        {
            if(count[i]>max){
                max=count[i];
                winner=i;
            }
        }
        printf("%d",winner+1);
    return 0;
}