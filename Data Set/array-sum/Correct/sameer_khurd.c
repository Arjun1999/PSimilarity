#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int sum=0,i,n;
    scanf("%d",&n);
    while(n--)
        {
        scanf("%d",&i);
        sum+=i;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
