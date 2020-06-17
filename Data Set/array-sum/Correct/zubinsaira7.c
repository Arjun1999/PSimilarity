#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int N, A[30000],i;
    long int sum=0;
    
    //enter the length of array
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    printf("%lu",sum);
    
    return 0;
}
