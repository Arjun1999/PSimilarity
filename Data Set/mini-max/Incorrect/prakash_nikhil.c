#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
int main() {
    long int num, min, max, sum;
    cin >> num;
    min = max = sum = num;
    for(int i = 1; i < 5; i++){
        cin >> num;
        sum += num;
        if(num > max)
            max = num;
        else
            if(num < min)
                min = num;
    }
    cout << sum - max << ' ' << sum - min;
    
    return 0;
}

