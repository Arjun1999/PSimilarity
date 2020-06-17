#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,sum = 0;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
        {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<t;j++)
        {
        sum = sum +a[j];
    }
    
        printf("%d",sum);
    return 0;
}
