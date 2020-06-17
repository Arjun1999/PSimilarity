
#include <stdio.h>


int main(){
    long int i,a,b,c,array[5],j,k,l;
    long long int min,max;
    for (i=0;i<=4;i++)
     {
       scanf("%ld",&array[i]);  
    }
     for (k=0;k<=4;k++)
     {
      for(l=k+1;l<=4;l++)
         {
           if (array[k]<array[l])
              {
                 b=array[k];
                 array[k]=array[l];
                 array[l]=b;
           }
      }
    }
    
   max=array[0]+array[1]+array[2]+array[3];
   min=array[4]+array[1]+array[2]+array[3];
             printf("%lld %lld",min,max);
    return 0;
}
