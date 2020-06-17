#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b,c=0,i;
    scanf("%d",&b);
    for(i=0;i<b;i++)
        {
        scanf("%d",&a);
        c=c+a;
    }
    printf("%d",c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
