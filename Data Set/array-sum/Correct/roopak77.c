#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int noOfTests=0;
    long int sum=0;
    int A[1000]={0};
    int i;
    
    scanf("%d",&noOfTests);
    for(i=0;i<noOfTests;i++)
        {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("%ld",sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
