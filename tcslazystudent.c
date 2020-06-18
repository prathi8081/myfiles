/*There is a test of Algorithms. Teacher provides a question bank consisting of N questions and guarantees all the questions in the 
test will be from this question bank. Due to lack of time and his laziness, Codu could only practice M questions. There are T questions 
in a question paper selected randomly. Passing criteria is solving at least 1 of the T problems. Codu can't solve the question he 
didn't practice. What is the probability that Codu will pass the test?

Constraints
0 < T <= 10000

0 < N, T <= 1000

0 <= M <= 1000

M,T <= N

Input Format
First line contains single integer T denoting the number of test cases.

First line of each test case contains 3 integers separated by space denoting N, T, and M.

Output
For each test case, print a single integer.

If probability is p/q where p & q are co-prime, print (p*mulInv(q)) modulo 1000000007, where mulInv(x) is multiplicative inverse
 of x under modulo 1000000007.

Test Case

Explanation
Example 1

Input

1

4 2 1

Output

500000004

Explanation

The probability is ½. So output is 500000004.
*/

#include<stdio.h>
int combination(int n,int r)
{
    int num=1,dem=1,ans;
    for(int i=1;i<=r;i++)
    {
        dem*=i;
        num*=(n-i+1);
    }
    return (num/dem);
}
int calgcd(int a,int b)
{
    int rem;
    while(1)
    {
        rem=a%b;
        if(rem==0)
            return b;
        a=b;
        b=rem;
    }
}
int mulinv(int a)
{
    int m=1000000007, b;
    for(int i=1;i<m;i++)
    {
        if((i*m+1)%a==0){
            b=(i*m+1)/a;
            return b;
        }
    }
}
int main()
{
    int qb=4, learnt=2,chose=1;
    int ways,fail,p,q,gcd,result;
    int unknown=qb-learnt;
    ways=combination(qb,chose);
    fail=combination(unknown,chose);
    p=ways-fail;
    q=ways;
    printf("%d %d",p,q);
    gcd=calgcd(p,q);
    if(gcd!=1)
    {
        p=p/gcd;
        q/=gcd;
    }
    result=(p*mulinv(q))%1000000007;
    printf("\n%d",result);
    return 0;
}