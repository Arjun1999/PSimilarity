#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d",&N);
    int array[N] = {1,2,3,4,5,6};
    int j = 0;
    int sum;
    for(int j = 0; j <= N; j++)
    {
        sum = sum+=array[j];
    }
    return sum;
}
