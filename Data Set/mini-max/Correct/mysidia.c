#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],  y,  ymin, ymax;
    int i,j, k;
    
    scanf("%ld %ld %ld %ld %ld",a,a + 1,a + 2, a + 3, a + 4);

    k = 0;
    
    for(i = 0; i  < 5 ; i++ ) {
        y = 0 ;
        for ( j = 0 ; j < 5 ; j++) {
            if ( i == j ) continue;
            
            y += a[j];
        }
        
        if ( k == 0 || y > ymax )  ymax = y;
        if ( k == 0 || y < ymin )  ymin = y;
        
        k = 1;
    }
    
    printf("%ld %ld\n", ymin, ymax);
    return 0;
}


