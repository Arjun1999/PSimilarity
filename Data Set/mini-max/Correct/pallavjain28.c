#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int smallest,largest,sum=0;
    
    
    for(int i=0;i<5;i++) {
        scanf("%ld",&a[i]);
        if(i==0) {
            smallest=a[i];
            largest=a[i];
        }
        else {
            if(a[i] < smallest)
                smallest = a[i];
            if(a[i] > largest)
                largest = a[i];
        }
        sum+=a[i];
    }
        
    printf("%ld %ld",(sum-largest),(sum-smallest)); 
    
    
    
    
    return 0;
}
