#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int i,n,sum=0,a[1000];
    scanf("%d",&n);
    if(n<1 || n>1000)
        exit(0);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        if(a[i]<0 ||a[i]>1000)
            exit(0);
        sum+=a[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
