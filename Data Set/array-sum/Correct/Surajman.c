#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    int res=0;
    for(i=0;i<n;i++)
        res=res+A[i];
    printf("%d",res);
    return 0;
}
