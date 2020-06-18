/*
In a country, there are 'N' slabs for Income tax which are common for all age groups and genders.As an income tax officer, 
investigating a case, you have the amount of tax paid by each employee of an organization.Considering the income tax slabs
and rebates offered, you need to find the total amount paid by the organization in salaries to the employees to match it with 
the amount reported by the organization in its filed Income tax Returns.Information regarding the income tax slabs, rebate
amount and the income tax paid by each employee of the organization will be provided. Rebate amount is subtracted from the 
total salary of each employee. Tax is calculated on the remaining amount.calculate sum of total salary paid to the employees in that year.
Input Format :
First Line will provide the Amount in each slab, separate by space (' ')
Second Line will provide the percentage of tax applied on each slab. Number of values in this line will be same as
 that in line one, separate by space (' ')
Third Line will provide the Rebate considered
Fourth line will provide the tax paid by each employee, separate by space (' ')

Explanation :
Example 1 : Input..
300000 600000 900000
10 20 30
100000
90000 150000 210000 300000
Output : 5300000
Explanation :
Slabs and tax percentage indicate that for salary:
Between 0 - 300000, tax is 0%
Between 300001 - 600000, tax is 10%
Between 600001 - 900000, tax is 20%
Greater than 900001, tax is 30%
First, we exclude the rebate from the salary of each employee.This will be the taxable component of salary.Upon, taxable salary apply
 the slab and tax percentage logic.Upon computation, one finds that employees are paid amounts 
1000000, 1200000, 1400000, 1700000 respectively, as salaries.Total salary paid to all employees in that year will be 5300000.
*/

#include<stdio.h>
int main()
{
    int taxSlab[]={300000,600000,900000};
    int taxPer[]={10,20,30};
    int rebate=100000,sal,totsal=0;
    int taxPaid[]={90000,150000,210000,300000};
    int maxTaxamt[100];
    for(int i=0;i<2;i++)
    {
        maxTaxamt[i]=(taxPer[i]*(taxSlab[i+1]-taxSlab[i]))/100;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
           if(j==1 || taxPaid[i]<maxTaxamt[j])
           {
               sal=taxPaid[i]*100/taxPer[j];
               sal+=taxSlab[j];
               break;
           }
           else if(taxPaid[i]>maxTaxamt[j])
           {
               taxPaid[i]-=maxTaxamt[j];
           }
           else if(taxPaid[i]==maxTaxamt[j])
           {
                 sal=taxSlab[i+1];
                 break;
           }
        }
        totsal+=sal+rebate;
    }
    printf("%d",totsal);
    return 0;
}