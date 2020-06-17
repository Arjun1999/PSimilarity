#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    int i =0;
    long long int *values;
    long long int sum=0;
    
    scanf("%d",&size);

    if(size < 0 || size > 1000)
        return 0;
    values = (long long int*)calloc (size,sizeof(long long int));
    while(i < size){
        scanf("%lld",&(values[i]));
           i++;
    }
    
    for(i=0;i<size;i++)
        sum += values[i];
        
    printf("%lld",sum);
    
    free(values);
    
    return 0;
}
