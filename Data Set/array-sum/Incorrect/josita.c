#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a[10],i,sum=0;
    
    printf("enter array size");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {scanf("%d",&a[i]);}
    for(i=1;i<=n;i++)
    sum=sum+a[i];
    printf("/nsum of array=%d",sum);
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   
}
