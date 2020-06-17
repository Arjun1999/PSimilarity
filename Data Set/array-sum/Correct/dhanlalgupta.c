#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a[1000],m,i,sum=0;
    scanf("%d",&n);
       if(n>=1&&n<=1000)      
         {  
           for(i=0;i<n;i++)
              {
               scanf("%d",&m);
               if(m<=1000) 
                sum+=m;
              }
       }
         
 printf("%d",sum);
           return 0;
}
