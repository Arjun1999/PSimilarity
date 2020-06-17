#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int size,sum=0,i;
    scanf("%d",&size);  
    if(size>=1&&size<=1000)
      {
       int a[size];
        for(i=0;i<size;i++)
         { 
           scanf("%d",&a[i]);
            if(a[i]>=0&&a[i]<=1000)
                {    
                  sum=sum+a[i];
   		 }
	  }
        printf("%d",sum);
	}
       return 0;
 }
