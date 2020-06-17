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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int sum = a + b + c + d + e;
    long int min;
    long int max;
    if(sum - a > sum -b && sum -a > sum - c && sum - a > sum - d && sum - a > sum - e)
        max = sum - a;
        else if(sum - b > sum -c && sum - b > sum - d && sum - b > sum - e)
            max = sum - b;
            else if(sum - c > sum - d && sum - c > sum - e)
                max = sum -c;
                else if(sum - d > sum - e)
                    max = sum - d;
                    else
                        max = sum -e;
            
    if(sum - a < sum -b && sum - a < sum - c && sum - a < sum - d && sum - a < sum - e)
        min = sum - a;
        else if(sum - b < sum -c && sum - b < sum - d && sum - b < sum - e)
            min = sum - b;
            else if(sum - c < sum - d && sum -c < sum - e)
                min = sum - c;
                else if(sum - d < sum - e)
                    min = sum - d;
                    else
                        min = sum - e;
            
    printf("%ld %ld", min, max);
    
    return 0;
    
}
