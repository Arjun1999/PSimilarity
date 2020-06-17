#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5];
    for(int i = 0; i < 5; i++)
        {
        scanf("%lld",&a[i]);
        }
    unsigned long long int temp ;
    unsigned long long int sum_max;
    unsigned long long int sum_min;
    for(int i = 0; i < 5 - 1 ; i++)
    {
        for(int j = 0; j < 5 - i - 1; j++)
            {
            if(a[j] < a[j+1])
                {
                temp = a[j];
				a[j]= a[j+1];
				a[j+1] = temp;
                }
            
            }
    }
    sum_max = a[1] + a[2] + a[3] + a[4]; 
    sum_min = a[0] + a[1] + a[2] + a[3];
    printf("%lld %lld",sum_max,sum_min);
    return 0;

}
