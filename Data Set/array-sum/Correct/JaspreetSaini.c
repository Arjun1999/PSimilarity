#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],n,b,c,d=0;
    scanf("%d",&b);
    for(n=0;n<b;n++)
        {
        scanf("%d",&c);
        d=d+c;
        }
    printf("%d",d);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
