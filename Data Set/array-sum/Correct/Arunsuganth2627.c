#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

/* Enter your code here. Read input from STDIN. Print output to STDOUT */
int n,i;
scanf("%d",&n);
unsigned long int a[n],sum=0;
for(i=0;i<n;i++)
{
scanf("%ld",&a[i]);
sum+=a[i];
}
printf("%ld",sum);


return 0;
}