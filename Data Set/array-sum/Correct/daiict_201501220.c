#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],b,i;
    long d=0;
    scanf("%d",&b);
    
    for(i=0;i<b;i++)
        {
        scanf("%d",&a[i]);
        
        d=a[i]+d;
    }
    printf("%ld",d);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
