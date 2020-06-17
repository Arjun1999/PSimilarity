#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int samples = 0;
    int sum = 0;
    int val = 0;
    scanf("%d", &samples);
    for(int i = 0; i < samples; i++) 
    {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d",sum);
    return 0;
}
