#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int min( long long int a, long long int b ) {
    return ( a > b ) ? b : a;
}

long long int max( long long int a, long long int b ) {
    return ( a < b ) ? b : a;
}

long long int Xmin( long long int a, long long int b, long long int c, long long int d, long long int e ) {
    return min( a, min( b, min( c, min( d, e ) ) ) );
}

long long int Xmax( long long int a, long long int b, long long int c, long long int d, long long int e ) {
    return max( a, max( b, max( c, max( d, e ) ) ) );
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int sum = a + b + c + d + e;
    
    printf( "%lld %lld", sum - Xmax(a,b,c,d,e), sum - Xmin(a,b,c,d,e) );
    
    return 0;
}
