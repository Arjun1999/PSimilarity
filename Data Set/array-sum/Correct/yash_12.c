#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int total = 0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        total = total + a[i];
    }

    printf("%d",total);

    return 0;
}
