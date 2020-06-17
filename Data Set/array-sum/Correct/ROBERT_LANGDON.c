#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,sum=0,i;
    int b[1000];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
