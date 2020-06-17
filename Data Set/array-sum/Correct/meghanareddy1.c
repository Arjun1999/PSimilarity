#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x[1000],sum=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
