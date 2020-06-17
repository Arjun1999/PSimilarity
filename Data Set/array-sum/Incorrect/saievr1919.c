#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,sum=0,a[]={1,2,3,4,10,11};
    scanf("enter the length",&n);
    for(i=0;i<n;i++)
    { sum=sum+a[i];}
    
    printf("sum of the given array is %d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
