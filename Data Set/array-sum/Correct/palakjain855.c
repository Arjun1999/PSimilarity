#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    //printf("%d", n);
    int a[n];
    
    int i, s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    printf("%d", s);
    return 0;
}
