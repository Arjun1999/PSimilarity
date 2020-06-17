#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[6]={1,2,3,4,5,6}
    int s=0,i;
    for(i=0;i<6;i++)
    s=s+arr[i];
    printf("sum=%d",s);
    
    
    return 0;
}

