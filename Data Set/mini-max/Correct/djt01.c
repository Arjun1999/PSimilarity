#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n = 5;
    
    long int numbers[n];
    for (int i = 0; i < n; i++)
        scanf("%ld", &numbers[i]);
    
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                sorted = false;
                long int placeholder = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = placeholder;
            }
        }
    }
    
    long int sum = 0;
    for (int i = 0; i < n; i++)
        sum += numbers[i];
    
    long int lowest = sum - numbers[n - 1];
    long int highest = sum - numbers[0];
    printf("%ld %ld", lowest, highest);
    
    return 0;
}
