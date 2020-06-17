#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&j);
        sum=sum+j;
    }
    printf("%d",sum);
    return 0;
}
