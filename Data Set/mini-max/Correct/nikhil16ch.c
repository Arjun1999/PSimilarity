#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned long long sum = 0;
    unsigned int data[5], min_data = UINT_MAX, max_data = 0;
    int i;
    for(i = 0; i < 5; i++)
    {
        scanf("%u",&data[i]);
        if( min_data > data[i] )
            min_data = data[i];
        if( max_data < data[i] )
            max_data = data[i];
        sum += data[i];
    }
    printf( "%lld %lld", sum - max_data, sum - min_data );
    return 0;
}
