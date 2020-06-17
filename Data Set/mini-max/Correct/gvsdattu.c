#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int temp,max=0,min=1000000001; 
    int i;
    long long int sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&temp);
        if(max<temp)
            max=temp;
        if(min>temp)
            min=temp;
        sum=sum+temp;
    }
    printf("%lld %lld\n",sum-max,sum-min);
    
    return 0;
}
