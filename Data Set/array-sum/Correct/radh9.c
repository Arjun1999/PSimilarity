#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   double arr[100000],sum=0;
   int n,i;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%.0lf",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
