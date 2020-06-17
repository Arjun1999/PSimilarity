#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int k,i;
    
    scanf("%d",&k);
    int a[k],sum=0;
     
    for(i=0;i<k;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
        {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    return 0;
}
