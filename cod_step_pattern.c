/*input-4
1111
222
33
4
*/

#include<stdio.h>
int main () {
  int i, j, n = 5;
for(i=1; i<n; i++)

{

for(j=1;j<=n-i;j++)

{

printf("%d", i);

}

printf("\n");

}

return 0;
}