#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int in[1000],n,i,sum=0;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&in[i]);
        sum=sum+in[i];
    }
    printf("%d",sum);
    return 0;
}
