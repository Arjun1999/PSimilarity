#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,N,a[1000],sum=0;
    scanf("%d",&N);
    if(N<=1000)
        {
       
       
    
    for(i=0;i<N;i++)
        {
        scanf(" %d",&a[i]);
        if(a[i]<=1000)
            {
           
        
        sum=sum+a[i];
       
        }}
    
printf("%d",sum);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
