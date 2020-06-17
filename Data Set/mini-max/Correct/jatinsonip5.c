#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    long num[5],temp;
    int i,j;
    long long min,max;
    for(i=0;i<5;i++){
        scanf("%ld",&num[i]);    
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(num[j]<num[i]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    min=num[0]+num[1]+num[2]+num[3];
    max=(min-num[0])+num[4];
    printf("%lld %lld",min,max);
    return 0;
}
