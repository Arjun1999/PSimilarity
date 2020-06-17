#include <stdio.h>

int main ()
{
    unsigned N;
    scanf("%u", &N);
    
    unsigned sum = 0;
    unsigned counter = 0;
    for ( ; counter < N; ++counter)
    {
        unsigned newval;
        scanf("%u", &newval);

        sum += newval;
    }

    printf("%u\n", sum);

    return 0;
}

