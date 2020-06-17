#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n;
    int a[999];
    int sum=0;
    scanf("%d",&n);
   if(n>0&&n<1001)
        {
        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
            {
            sum=sum+a[i];
        }
     
       printf("%d",sum);
    }
        else
            {
            printf("\n enter n value from 1 to 1000");
        }
    return 0;
            
}
