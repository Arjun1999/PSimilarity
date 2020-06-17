#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int arraysum(int,int *);

int main() 
{
 
   int arr[1000],i,n,sum;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i]);
     sum=arraysum(n,arr);
    printf("%d",sum);
    return 0;
}
int arraysum(int n,int *arr)
    {
      int i,s=0;
      for(i=0;i<n;i++)
          s=s+arr[i];
     return(s);
 
}
