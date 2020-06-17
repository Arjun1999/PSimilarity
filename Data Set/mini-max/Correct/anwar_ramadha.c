#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int min_sum = b+c+d+e, max_sum=b+c+d+e;
    long int ar[5];
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    ar[4]=e;
    //min_sum
    for(int i=0; i < 5;i++) {
        long int sum_temp=0;
        int cnt=0, j=i+1;
        while (cnt<4) {
            
            if (j == 5 ) j=0;
            sum_temp+=ar[j];
            cnt++;
            j++;
        }
        if (min_sum>sum_temp) min_sum=sum_temp;
        if (max_sum<sum_temp) max_sum=sum_temp;
    }
    printf("%lld %lld", min_sum, max_sum);
    return 0;
}
