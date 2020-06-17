#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int find_min(long int *sum);
long int find_max(long int *sum);

int main(){
   unsigned long long int a[5],max,min,sum=0;
    int i;
    scanf("%lld",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    for(i=1;i<5;i++){
        scanf("%lld",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}

long int find_min(long int *sum)
    {
    long int min_val;
    int i;
    int j;
    long int min_val_test;
    
    i = 0;
    min_val = sum[0];
    while(i < 5)
    {
        min_val_test = 0;
        j = i;
        while((j - i) < 4)
        {
           min_val_test += sum[j%5];
           j++;        
        }
        if (min_val_test < min_val)
            min_val = min_val_test;
        i++;
    }
    return min_val;
}

long int find_max(long int *sum)
    {
    long int max_val;
    long int max_val_test;
    int i;
    int j;
    
    i = 0;
    max_val = sum[0];
    while(i < 5)
        {
        max_val_test = 0;
        j = i;
        while((j - i) < 4)
        {
            max_val_test += sum[j%5];
            j++;
        }
        if (max_val_test > max_val)
            max_val = max_val_test;
        i++;
    }
    return max_val;
}
