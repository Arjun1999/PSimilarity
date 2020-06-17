#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int N,arr;
    long int sum=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&N);
    while(N--)
        {
         scanf("%d",&arr);
        sum+=arr;
        
    }
    printf("%ld",sum);
    return 0;
}
