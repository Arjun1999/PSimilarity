#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,sum=0,j;
    scanf("%d",&i);
    int a[i];
    for(j=0;j<i;j++)
        {
        scanf("%d",&a[j]);
        sum+=a[j];
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
