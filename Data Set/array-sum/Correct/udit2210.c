#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i,sum=0,arr[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf(" %d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
