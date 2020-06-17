#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int sum=0,a[1000],N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
printf("%d",sum);
    return 0;
}
