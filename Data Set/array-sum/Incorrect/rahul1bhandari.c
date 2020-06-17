#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a[100],i,s=0; 
    scanf("%d",&n);
    
    for( i = 0; i< n;i++){
       scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}
