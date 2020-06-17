#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a[1000],sum=0,i;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
           
        }
        for(i=0;i<n;i++)
            {
            if(a[i]>=0 && a[i]<=1000)
                {
             sum=sum+a[i];
        } 
        else
            {
            printf("Invalid input");
            exit(0);
        }
       
            
        } printf("%d",sum);}
    
    else
        {
        printf("Invalid range");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}