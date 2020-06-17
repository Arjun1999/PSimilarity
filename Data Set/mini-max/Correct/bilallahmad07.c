#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int max=0,min=0,sum=0;
    for(int i=1;i<=5;i++){
        scanf("%lld",&a);
        sum+=a;
        if(i==1){
            max=min=a;
        }
        else{
            if(a>max)
                max=a;
            if(a<min)
                min=a;
        }
    }
    printf("%lld %lld",(sum-max),(sum-min));
    return 0;
}
