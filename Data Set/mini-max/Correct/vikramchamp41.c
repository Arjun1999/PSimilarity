#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


   int main(){ long long int f[5]; long long int i,j,a;
for(i = 0; i < 5; i++){
    scanf("%lld",&f[i]);
    }

for (i = 0; i < 5; ++i)
{
    for (j = i + 1; j < 5; ++j)
    {
        if (f[i] > f[j])
        {
            a =  f[i];
            f[i] = f[j];
            f[j] = a;
        }
    }
}
long long int summin = 0;
long long int summax = 0;

for(i = 0; i<4; i++){
    summin = summin + f[i];

}
for(j = 4; j>=1; j--){
    summax = summax + f[j];
}
printf("%lld %lld",summin,summax);
return 0;
}
