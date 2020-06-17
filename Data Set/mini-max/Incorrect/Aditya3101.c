#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int list[5], i, temp, done, max, min;

    for(i=0 ; i<5 ; i++){
        scanf(" %d", list[i]);
    }
    
    while(1){
        done = 1;
        
        for(i=0 ; i<5 ; i++){
            if(list[i] > list[i+1]){
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
                done = 0;
            }
        }
        
        if(done == 1){
            break;
        }
    }
    
    max = list[1] + list[2] + list[3] + list[4];
    min = list[1] + list[2] + list[3] + list[0];
    
    printf("%d %d", min, max);
    return 0;
}
