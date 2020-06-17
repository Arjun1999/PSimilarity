#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i;
    int sum=0,a[1000];
    scanf("%d", &t);
    for(i=0;i<t;i++)
        scanf("%d", &a[i]);
    for(i=0;i<t;i++)
        sum=sum+a[i];
    printf("%d\n", sum);
    return 0;
}
