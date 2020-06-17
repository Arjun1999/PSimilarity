#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long  n;
    long sum=0;
    long arr[1001];
    scanf("%ld",&n);
    for(long i=0;i<n;i++){
        scanf("%ld",&arr[i]);
         sum=sum+arr[i];       
    }
    
   printf("%ld",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
