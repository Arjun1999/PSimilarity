#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int number,value,sum=0,i;
    scanf("%d",&number);
    for(i=0;i<number;i++)
        {
        scanf("%d",&value);
        sum = sum +value;
    }
    printf("%d",sum);
    return 0;
}
