#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,temp,sum,i;
    sum=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
