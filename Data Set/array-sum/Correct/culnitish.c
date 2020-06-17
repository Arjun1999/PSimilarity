#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,ch[1000],sum=0,i;
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++)
    scanf("%d ",&ch[i]);
    for(i=0;i<n;i++)
        sum+=ch[i];
    printf("%d",sum);
    return 0;
}
