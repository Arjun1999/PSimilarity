
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,n,j,k; 
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=n-i;j=j+1)
        {
            printf(" ");
        }
        for(k=1;k<=i;k=k+1)
        {
            printf("#");
        }    
        printf("\n");
    }
    
    return 0;
}