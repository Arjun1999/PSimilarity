#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
       {
        scanf("%d",&a[i]);
        sum=sum+a[i];
       }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
