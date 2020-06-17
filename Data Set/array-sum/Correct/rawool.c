#include <stdio.h>

int main() {
    int arrsize, i, num, sum;

    // get array size
    fscanf(stdin, "%d", &arrsize);
    // accumulate sum
    sum = 0;
    for(i=0; i<arrsize; i++) {
        fscanf(stdin, "%d", &num);
        sum += num;
    }
    // print sum
    fprintf(stdout, "%d", sum);    
    
    return 0;
}
