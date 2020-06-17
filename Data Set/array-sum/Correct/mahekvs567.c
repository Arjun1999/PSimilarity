#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
long int i,j,a[1000],n,m=0;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&a[i]);
m=m+a[i];
}
printf("%ld",m);
    return 0;
}
