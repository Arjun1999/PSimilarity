#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, s, a[100], num;
    s=0;
    scanf("%d", &n);
    for(i=0 ; i<=(n*2)-1 ; i=i+2)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }    
    for(i=1 ; i<=(n*2)-1 ; i=i+2)
    {
       a[i]="\0";
    }
    printf("%d", s);
    return 0;
}
