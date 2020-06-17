#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
  
        
        int p,a[1000],*j,sum=0;
        scanf("%d",&p);
        j=&a[0];
        for(int i=0;i<p;i++)
            {
            scanf("%d",j+i);
        }
        for(int i=0;i<p;i++)
            {
                
               sum=sum+*(j+i);
           
        }
         printf("%d",sum);
        
   
    
    
     
    return 0;
}
