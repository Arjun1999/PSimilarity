#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
    int i,j,sum[10000];
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        for(i=1;i<5;i++)
            sum[0]=0;
            sum[0]=sum[0]+a[i];
            for(i=0;i>1&&i<5;i++)
                 sum[1]=0;
                sum[1]=sum[1]+a[i];
                for(i=0;i>2&&i<5;i++)
                    sum[2]=0;
                    sum[2]=sum[2]+a[i];
                  for(i=0;i>3&&i<5;i++)
                      sum[3]=0;
                      sum[3]=sum[3]+a[i];
                       for(i=0;i<4;i++)
                           sum[4]=0;
                           sum[4]=sum[4]+a[i];
 
                      
                          max=sum[0];
                          min=sum[0];
                          for(j=0;j<5;j++)
                          { 
                           if( max<sum[j] )
                           { max=sum[j];}
                        if(min>sum[j])
                        { min=sum[j];}
                          }
                     printf("%d %d",min,max);
}
         
                         
                   