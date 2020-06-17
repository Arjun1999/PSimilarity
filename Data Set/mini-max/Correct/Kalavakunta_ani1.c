#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int Sum;
    long int Arr[4], Min, Max;
    int i;
    
    scanf("%ld", &Arr[0]);
    Min = Arr[0];
    Max = Min;
    Sum = Min;
    
    for (i=1; i<5; i++) {
        scanf("%ld", &Arr[i]);    
        Sum += Arr[i];
        if (Arr[i] < Min) {
            Min = Arr[i];
        } else if (Arr[i] > Max) {
            Max = Arr[i];
        }
    }
    
    printf("%lld %lld",Sum-Max, Sum-Min);    
    return 0;
}