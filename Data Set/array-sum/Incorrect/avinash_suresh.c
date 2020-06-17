#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    printf("Type the number of elements");
    scanf("%d",&n);
    int a[n];
    int sum;
    for (int i=0; i<n;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
