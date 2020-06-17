#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,k[1000],n=0;
    scanf("%d",&i);
    for(j=0;j<=i;j++)
        {
        scanf("%d",&k[j]);
        
       n=n+k[j]; 
    }
    printf("%d",n);
    return 0;
}
