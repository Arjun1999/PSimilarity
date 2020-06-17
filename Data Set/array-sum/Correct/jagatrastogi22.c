#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,t,a[1000]={0},i;
scanf("%d",&t);
    
    for(i=0;i<=t;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
