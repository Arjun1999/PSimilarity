#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,arr[1000];
    int s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
    s=s+arr[i];
    }
    printf("%d",s);
    return 0;
}
