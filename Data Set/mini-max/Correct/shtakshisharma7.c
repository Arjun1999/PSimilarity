#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 unsigned int smallest=3999999999,largest=0,a[5],i,j,sum;
    for(i=0;i<5;i++)
    scanf("%u",&a[i]);
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<5;j++){
            if(i==j)
                continue;
    sum+=a[j];
}
if(sum<smallest)
    smallest=sum;
if(largest<sum)
    largest=sum;
}
printf("%u %u",smallest,largest);
    return 0;
}
