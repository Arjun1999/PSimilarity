#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],i,j,sum=0;
    scanf("%d",&j);
    for(i=0;i<j;i++)
        {
        scanf("%d",&a[i]);
        sum+=a[i]; 
    }
    printf("%d",sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
