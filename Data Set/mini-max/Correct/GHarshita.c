#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],max=0;
    long long int sum1,sum2;
    for(int i=0;i<5;i++)
    {
    scanf("%ld ",&a[i]);
    }
    
        for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (a[i] > a[j])
            {
                int s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }
    sum1=a[0]+a[1]+a[2]+a[3];
    sum2=a[1]+a[2]+a[3]+a[4];
    printf("%Ld %Ld", sum1,sum2);
    return 0;
}
