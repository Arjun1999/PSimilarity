#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a,i;
    scanf("%d",&a);
        int sum=0, array[a];
        for(i=0;i<a;i++)
         scanf("%d",&array[i]);
    for(i=0;i<a;i++)
        {
        sum=sum+array[i];
    }
        printf("%d",sum);
    return 0;
}
