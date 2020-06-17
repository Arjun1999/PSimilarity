#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum=0;
    printf("\n enter the array size");
    scanf("%d",&n);
    printf("\n enter the elements");
     for(int i=1;i=n;i++)
        {
        scanf("%d",&i);
         sum=sum+i;
        
        
    }
    printf("\n the sum is: %d",sum);
    
    
    return 0;
}
