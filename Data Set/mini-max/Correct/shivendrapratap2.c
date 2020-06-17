#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    unsigned long long int mm[5];
    int t;
    for(int i=0;i<5;i++){
        scanf("%llu",&mm[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mm[j]>mm[j+1]){
              t=mm[j];
              mm[j]=mm[j+1];
              mm[j+1]=t;
     }
     }    
     }
     printf("%llu %llu",mm[0]+mm[1]+mm[2]+mm[3],mm[1]+mm[2]+mm[3]+mm[4]);
    return 0;
}
