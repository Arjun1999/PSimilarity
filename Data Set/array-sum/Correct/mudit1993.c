#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&i);
        sum+=i;
    }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
