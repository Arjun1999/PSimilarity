#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,i;
    scanf("%d",&l);
    int a[l],sum=0; 
    
    for(i=0;i<l;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
