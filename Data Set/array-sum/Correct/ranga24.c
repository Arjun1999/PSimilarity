#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,n,m[1001],l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&m[i]);
}
for(j=0;j<n;j++)
{
l=l+m[j];
}
printf("%d",l);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
