#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a,b,c,d,e,fa,fb,fc,fd,fe,j,temp=0,i,n;
    unsigned long long int as[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
  
  
         fa=b+c+d+e;
               
        fb=a+c+d+e;
             
        fc=a+b+d+e;
                 
        fd=a+b+c+e;
                
      fe=a+b+c+d;
                
       
               
    
 /*   if(fa>(fb||fc||fd||fe)||fa<(fb||fc||fd||fe))
        {
        printf("%d",fa);
        scanf("%d",&fa);
    }
    else if(fb>(fa||fc||fd||fe)||fb<(fa||fc||fd||fe))
        {
        printf("%d",fb);
        scanf("%d",&fb);
    }
    else if(fc>(fa||fb||fd||fe)||fc<(fa||fb||fd||fe))
        {
        printf("%d",fc);
        scanf("%d",&fc);
    }
     else if(fd>(fa||fb||fc||fe)||fd<(fa||fb||fc||fe))
         {
        printf("%d",fd);
        scanf("%d",&fd);
     }
     else
         {
        printf("%d",fe);
    scanf("%d",&fe);
     } */
  // printf("%lld,%lld,%lld,%lld,%lld\n",fa,fb,fc,fd,fe);
            as[0]=fa;as[1]=fb;as[2]=fc;as[3]=fd;as[4]=fe;
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {   if(as[i]>as[j])
                {
                    temp=as[i];
                    as[i]=as[j];
                    as[j]=temp;
            }
            
        }
    }
    printf("%lld %lld",as[0],as[4]);
    
}
        