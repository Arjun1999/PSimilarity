#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   long long int sum1,sum2,sum3,sum4,sum5;
    sum1=a+b+c+d;
    sum2=b+c+d+e;
    sum3=c+d+e+a;
    sum4=d+e+a+b;
    sum5=a+b+c+e;
    
     if(sum1<=sum2 && sum1<=sum3 && sum1<=sum4 && sum1<=sum5)
        {
        printf("%lld\t",sum1);
    }
    else if(sum2<=sum1 && sum2<=sum3 && sum2<=sum4 && sum2<=sum5)
      {
        printf("%lld\t",sum2);
    }
    else if(sum3<=sum1 && sum3<=sum2 && sum3<=sum4 && sum3<=sum5)
    {
        printf("%lld\t",sum3);
    }
   else if(sum4<=sum1 && sum4<=sum2 && sum4<=sum3 && sum4<=sum5)
     {
       printf("%lld\t",sum4);
   }
  else if(sum5<=sum1 && sum5<=sum2 && sum5<=sum3 && sum5<=sum4)
    {
      printf("%lld\t",sum5);
  }
   if(sum1>=sum2 && sum1>=sum3 && sum1>=sum4 && sum1>=sum5)
        {
        printf("%lld\t",sum1);
    }
    else if(sum2>=sum1 && sum2>=sum3 && sum2>=sum4 && sum2>=sum5)
      {
        printf("%lld\t",sum2);
    }
    else if(sum3>=sum1 && sum3>=sum2 && sum3>=sum4 && sum3>=sum5)
    {
        printf("%lld\t",sum3);
    }
   else if(sum4>=sum1 && sum4>=sum2 && sum4>=sum3 && sum4>=sum5)
     {
       printf("%lld\t",sum4);
   }
  else if(sum5>=sum1 && sum5>=sum2 && sum5>=sum3 && sum5>=sum4)
    {
      printf("%lld\t",sum5);
  }
   
    
        
        
        

    
    
    return 0;
}
