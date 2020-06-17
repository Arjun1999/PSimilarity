#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int i,n,ar[1000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)  
        count+=ar[i];
    printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
