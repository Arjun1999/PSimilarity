#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int C,V,F=0,A[F],S=0;
	     scanf("%d",&V);
	     F = V-1;
	     for(C=0;C<=F;C++){
	         scanf("%d",&A[C]);
	         S+=A[C];

	     }
	     printf("%d",S);
    
    
    return 0;
}
