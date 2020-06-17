#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,n,sum;
    scanf("%d",&n);
    sum = 0;
    for(i = 0;i<n;i++)
    {
        int j;
        scanf("%d",&j);
        sum += j;
    }
    printf("%d",sum);
    
    return 0;
}
