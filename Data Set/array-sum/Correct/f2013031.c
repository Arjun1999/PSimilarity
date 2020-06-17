#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d",sum);
    return 0;
}
