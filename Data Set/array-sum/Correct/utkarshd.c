#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int n,i,sum=0,ar[10002]; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&ar[i]);
    }  
    for(i=0;i<n;i++)
      {
        sum=sum+ar[i];
    }  
    printf("%d",sum);
    return 0;
}
