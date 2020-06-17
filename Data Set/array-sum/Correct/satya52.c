#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N,A[1000],sum=0,i;
scanf("%d",&N);
for(i=0;i<N;i++)
    {
     scanf("%d",&A[i]);
     sum=sum+A[i];
    }
printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
