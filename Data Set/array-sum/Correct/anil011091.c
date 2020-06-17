#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int numel;
    
        scanf("%d", &numel);
    int * nums = malloc(sizeof(int)* numel);
    int i;
    int sum =0;
    for(i =0; i< numel ; i++)
     {
        scanf("%d",&(nums[i]));
             sum += nums[i]; 
    }
              printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
