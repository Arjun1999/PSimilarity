#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int ar[1000],a,i,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("%d",sum);
    return 0;
}
