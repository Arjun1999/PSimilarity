#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int numbersForMax[5], numbersForMin[5]; 
    scanf("%ld %ld %ld %ld %ld", &numbersForMax[0], &numbersForMax[1], &numbersForMax[2], &numbersForMax[3],                                                       &numbersForMax[4]);   
    memcpy((void *) numbersForMin, (void *) numbersForMax, 5*sizeof(long int));    
    
    long int currentMax, currentMin;
    int currentMaxIndex, currentMinIndex, k;
    long long int maxSum = 0, minSum = 0;
    for (int j = 0; j < 4; j++) {
        currentMax = numbersForMax[0];
        currentMaxIndex = 0;
        k = 0;
        while (numbersForMin[k] == 0) k++;
        currentMin = numbersForMin[k];
        currentMinIndex = k;
        for (int i = 0; i < 5; i++) {
            if (numbersForMax[i] != 0 && numbersForMax[i] > currentMax) {
                currentMax = numbersForMax[i];
                currentMaxIndex = i;
            }
            if (numbersForMin[i] != 0 && numbersForMin[i] < currentMin) {
                currentMin = numbersForMin[i];
                currentMinIndex = i;
            }
        }
        maxSum += currentMax;
        numbersForMax[currentMaxIndex] = 0;
        minSum += currentMin;
        numbersForMin[currentMinIndex] = 0;
    }
    
    printf("%lld %lld\n", minSum, maxSum);
    
    return 0;
}



