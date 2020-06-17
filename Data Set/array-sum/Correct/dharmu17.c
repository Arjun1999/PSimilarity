#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    int a[t],i,sum=0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
