#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,i,a[1000],sum=0;
scanf("%d",&n);
    if(n>=1 && n<=1000)
        {
        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
        if(a[i]>=0 && a[i]<=1000)
            {
 sum=sum+a[i];
        }
    }
    }
       printf("%d",sum);   
    return 0;
}
