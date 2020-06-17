#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a[100],k,i,b[100],j,largest,max;
    int sum;
    
    scanf("%d",&n);
    scanf("%d",&j);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n-j+1;i++)
        {
            sum=0;
            for(k=i;k<i+j;k++)
            {
            sum=sum+a[k];
            }
        
            if(max<sum)
            max=sum;
        }
    
    
   
        printf("%d",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

