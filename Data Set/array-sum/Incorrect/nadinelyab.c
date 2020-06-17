#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    int sum, num;
    int* array;
    cin >> array;
    for(int i = 0; i<t; i++){
       sum += array[i];
    }
    return sum;
}
