#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,x; 
    long int b,max,min; 
    long int c; 
    long int d;
    long int e,s;
    long int sum[6];
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    s = 0;
    s = a+b+c+d+e;
    for(i=1;i<6;i++){
        if(i == 1) x = a;
        else if(i == 2) x = b;
        else if(i==3) x = c;
        else if(i==4) x = d;
        else x = e;    
        sum[i] = s - x;
    }
    min = sum[1];
       max = -1;
    for(i=1;i<6;i++){
        if(max < sum[i])
            max = sum[i];
        if(min > sum[i])
            min = sum[i];
    }
    printf("%ld %ld",min ,max);
    return 0;
}
