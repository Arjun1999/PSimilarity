#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t,i;
    int sum=0;
    int A[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&A[i]);
    for(i=0;i<t;i++)
        sum=sum+A[i];
    printf("%d",sum);
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
