#include<stdio.h>
#include<limits.h>
int main()
{
    long long int array[5], minimum, c, maximum,sum=0;

    for ( c = 0 ; c < 5 ; c++ ){
        scanf("%lld",&array[c]);
        sum=sum+array[c];
    }
    minimum = INT_MAX;
    maximum = INT_MIN;
    for ( c = 0 ; c < 5 ; c++ )
    {


        if ( array[c] < minimum )
        {
           minimum = array[c];
        }
        if(array[c]> maximum)
        {
            maximum=array[c];
        }
    }

    printf("%lld %lld\n", sum-maximum,sum-minimum);
    return 0;
}
