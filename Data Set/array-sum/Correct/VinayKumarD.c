#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int flag=0,i,n,a[1000],sum=0;
    
    if(scanf("%d",&n) && (n < 1) || (n > 1000)) 
        return(-1);
    for(i=0;i<n;i++) {
        if(scanf("%d",&a[i]) && (a[i] < 0) || (a[i] > 1000))
            return(-1);
        sum+=a[i];
    }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
