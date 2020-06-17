#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int m[5],avg,min,max;
    int i;
   long int a; 
   long int b; 
   long int c; 
   long int d;
   long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    m[0] = b + c + d + e;
    m[1] = a + c + d + e;
    m[2] = a + b + d + e;
    m[3] = a + b + c + e;
    m[4] = a + b + c + d;
    avg = (m[0] + m[1] + m[2] + m[3] + m[4])/5;
    min = max = avg;
    for(i = 0; i<5; i++)
        {
        if(max < m[i])
            max = m[i];
        else if(min > m[i])
            min = m[i];
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
