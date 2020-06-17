#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int a[5],i,temp,sum1,sum,max,min;
    for(i=0;i<5;i++){}
    
    for(a[i] = 0; a[i] < 5; a[i]++){
       scanf("%d",&a[i]);
    }
    for(a[i]=0;a[i]<5;a[i]++){
        temp=a[i];
        for(int i=0;i<5;i++)
        {
        sum =a[0]+a[1]+a[2]+a[3]+a[4]-temp;
            sum1=sum;
        if(sum1<=sum)
            min=sum1;
        if(sum1>=sum)
            max=sum1;
    }
    }
        printf("the maximum value is %d",max);
        printf("the minimum value is %d",min);
    return 0;
}
    