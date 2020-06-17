#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    long int a[5],s=0;
    for(int i=0;i<5;i++){
        scanf("%ld",&a[i]);
        s+=a[i];
    }
    long int min=a[0],max=a[0];
    for(int i=1;i<5;i++){
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    printf("%ld %ld",s-max,s-min);
    
    
    
    return 0;
}
