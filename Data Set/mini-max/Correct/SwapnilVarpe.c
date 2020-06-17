#include<stdio.h>

long sumExcept(long array[], int except) {
    long sum = 0;
    for(int i=0; i<5; i++) {
        if(i != except) sum += array[i];
    }
    return sum;
}

int main() {
    long array[5], sum[5];

    for(int i=0; i<5; i++) {
        scanf("%ld", &array[i]);
    }

    for(int i=0; i<5; i++) {
        sum[i] = sumExcept(array, i);
    }
    
    long min = sum[0], max = sum[0];

    for(int i=1; i<5; i++) {
        if(sum[i] > max)
            max = sum[i];
        if(sum[i] < min)
            min = sum[i];
    }
    
    printf("%ld %ld", min, max);
}
