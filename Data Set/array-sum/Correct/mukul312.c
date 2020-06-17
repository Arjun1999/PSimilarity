#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,*A;
    scanf("%d",&n);
    int i;
    int sum=0;
    A =(int)malloc(n*sizeof(int)); //bzero(A);
    
    for(i=0;i<n;i++) {
        scanf("%d",&A[i]);
        sum += A[i];
    }
    printf("%d",sum);
    free(A);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
