#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    unsigned long long int a[5],min,max, minsum=0,maxsum=0,minindex=0,maxindex=0;
    for (int i=0;i<5;i++)
    scanf("%llu",&a[i]);
    min=a[0];
    max=a[0];
    for (int j=0;j<5;j++)
        {
        if (min>a[j])
        {
            min=a[j];
            minindex=j;
        }
        if (max<a[j])
        {
            max=a[j];
            maxindex=j;
            
        }
    }
    
    for (int k=0;k<5;k++) 
        {
        if (k!=minindex)
            maxsum+=a[k];
        if (k!=maxindex)
            minsum+=a[k];
    }
    
    printf("%llu %llu",minsum,maxsum);
    
    return 0;
}
