#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{   
    long long int s[5];
    long long int sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%lld",&s[i]);
        sum+=s[i];
    }
    long long int min,max;
    if (s[0]<s[1])
    {
       min = s[0];
       max = s[1];
    }
    else 
    {
        min = s[1];
        max = s[0];
    }
    for(int i=2;i<5;i++)
    {
        if (min>s[i])
            min=s[i];
        if(max<s[i])
            max=s[i];        
    }
    printf("%lli %lli",sum-max,sum-min);
    return 0;
}
