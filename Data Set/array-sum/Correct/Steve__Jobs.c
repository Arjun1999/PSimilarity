#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long int n,i,sum=0;
    scanf("%ld",&n);
    long int a[n];
    if(n>0&&n<=1000)
        {
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        if(a[i]>0&&a[i]<=1000)
        sum=sum+a[i];
        else
            break;
    }
   
    printf("%ld",sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
