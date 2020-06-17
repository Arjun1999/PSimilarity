#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int number[5];
long long int i,j,m,r,s,n,a;
int main(){
    for (i=0;i<5;i++)
        {
    scanf("%lld",&number[i]);
    }
        for (i = 0; i < 5; ++i)

    {

        for (j = i + 1; j < 5; ++j)

        {

            if (number[i] > number[j])

            {

                a =  number[i];

                number[i] = number[j];

                number[j] = a;
            }
        }
        }
    r=number[0]+number[1]+number[2]+number[3];
    s=number[1]+number[2]+number[3]+number[4];
    
    printf("%lld %lld",r,s);
    
    return 0;
}
