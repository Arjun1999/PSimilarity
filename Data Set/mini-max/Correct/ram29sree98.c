#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() { long long int i,j,p,sum=0,sm=0;
long long int arr[5];
for(i=0;i<5;i++)
{scanf("%lld",&arr[i]);}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[i]>arr[j])
{
p=arr[i];
arr[i]=arr[j];
arr[j]=p;
}
}
}
for(i=0;i<5;i++)
{scanf("%lld",&arr[i]);for(j=1;j<5;j++)
{sum=sum+arr[j];}

for(j=0;j<5-1;j++)
 {sm=sm+arr[j];}
 printf("%lld",sm);
printf(" ");
printf("%lld",sum);
return 0;
}
}
            