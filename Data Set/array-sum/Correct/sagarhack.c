#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000];
    int e,b,c=0;
    scanf("%d",&e);
    for(b=0;b<e;b++)
    {    scanf("%d",&a[e]);
    c=c+a[e];
    }
    printf("%d",c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
