#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int simpleArraySum(int ar_count, int ar[100]) 
{ int sum=0;
   for(int i=0;i<ar_count;i++)
   {
       sum+=ar[i];
   }return sum;
}

int main()
{ int n,ar[100];

scanf("%d",&n);
for(int i=0;i<n;i++)
{scanf("%d",&ar[i]);
}
int ans=simpleArraySum(n,ar);
printf("%d",ans);
return 0;
}