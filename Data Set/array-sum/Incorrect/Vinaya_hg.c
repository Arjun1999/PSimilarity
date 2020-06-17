#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n,i,a[10],sum=0,j,s;
   scanf("%d",&n);
    for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        sum+=a[j];
    }
    printf("s=%d",sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
