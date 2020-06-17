#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i;
    int sum=0;
    int a[10000];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("\n %d", &a[i]);
        sum=sum+a[i];
            
    }
    printf("%d", sum);  
    return 0;
}
