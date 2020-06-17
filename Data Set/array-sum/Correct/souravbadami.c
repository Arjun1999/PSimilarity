#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long total,*data,i,sum=0;
        scanf("%lld",&total);
    data=(long long*)malloc(total*sizeof(long long));
    for(i=0;i<total;i++)
        {
        scanf("%lld",&data[i]);
        sum=sum+data[i];    }
    printf("%lld",sum);
    return 0;
}
