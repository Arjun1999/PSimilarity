#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{

long long int a; 
long long int b; 
long long int c; 
long long int d;
long long int e;
long long int mins,maxs,t;
scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
long long int arr[5]={a,b,c,d,e};

for(int i=0;i<5;i++)
{ 
for(int j=i+1;j<5;j++)
{
if(arr[j]<arr[i]) 
{
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
} 

mins=(arr[0]+arr[1]+arr[2]+arr[3]);
maxs=(arr[1]+arr[2]+arr[3]+arr[4]);

printf("%lld %lld",mins,maxs);
return 0;
}
