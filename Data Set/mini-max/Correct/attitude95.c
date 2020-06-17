#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   
    long int a[5];
    
    //sorting the array.
    
    int i,j,temp;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    long int min=a[0]+a[1]+a[2]+a[3];
    long int max=a[1]+a[2]+a[3]+a[4];
    printf("%lld\t%lld",min,max);
    return 0;
}
