#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int sum=0,i,n,a[1000];
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
        
    }
    printf("%d",sum);
}