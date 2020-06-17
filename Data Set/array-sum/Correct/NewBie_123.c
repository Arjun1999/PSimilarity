#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,in,sum=0;
    scanf("%d",&n);
    while(n--)
        {
        scanf("%d",&in);
        sum+=in;
    }
    printf("%d\n",sum);
    return 0;
}
