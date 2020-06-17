#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int i = 0,temp,sum=0;
    while(i<n)
    {
        scanf("%d",&temp);
        sum = sum+temp;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
