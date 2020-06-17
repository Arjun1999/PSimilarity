#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned long int x[5];
    int i,j;
    unsigned long int max=0;
    unsigned long int min=0xFFFFFFFF;
    unsigned long int sum=0;


   scanf("%lu %lu %lu %lu %lu",&x[0],&x[1],&x[2],&x[3],&x[4]);

    for ( i=0; i < 5; i++ ) {
        sum = 0;
        for ( j=0; j < 5; j++ ) {
            if ( j == i ) continue;
            sum += x[j];
        }
        if ( sum > max ) max = sum;
        if ( sum < min ) min = sum;
    }

    printf("%lu %lu",min,max);
}
