#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,a[1000];
    long int s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    s=0;
    for(i=0;i<n;i++)
        {
        s=s+a[i];
    }
    printf("%ld\n",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
