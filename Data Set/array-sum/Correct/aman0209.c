#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,t,a[1000],sum=0,j;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
        {
        scanf("%d",&a[i]);
        
    }
    for(j=0;j<t;j++)
    {    sum=sum+a[j];}
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
