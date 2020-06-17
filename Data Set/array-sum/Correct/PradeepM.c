#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
int N,i,sum=0;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
{
scanf("%d",&a[i]); 
}
for(i=0;i<N;i++)
{
sum=sum+a[i]; 
}
printf("%d",sum);
return 0;
}

