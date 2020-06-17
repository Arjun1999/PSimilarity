#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
        {
        count=count+a[i];
        }
    printf("%d",count);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
