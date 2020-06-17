#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,*arr,tot=0,i;
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        tot=arr[i]+tot;
    }
    printf("%d",tot);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
