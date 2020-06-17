#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long a[5],i,j,minimun_sum,maximun_sum,temp=0;
    
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    
    for(i=0;i<5;i++)
        {
        for(j=i;j<5;j++)
            {
            if(a[j]<a[i])
                {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(i=0;i<4;i++)
        {
        minimun_sum += a[i];
    }
    for(i=1;i<5;i++)
        {
        maximun_sum += a[i];
    }
    
    printf("%ld %ld",minimun_sum,maximun_sum);
    return 0;
}
