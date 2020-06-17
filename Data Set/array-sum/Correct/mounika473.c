#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,i,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
           {
            scanf("%d ",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
