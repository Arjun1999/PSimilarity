#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int min();
long long int max();

  int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int min_sum=0 ;
     long long int max_sum=0;
    min_sum=a+b+c+d+e-max(a,b,c,d,e);
    max_sum=a+b+c+d+e-min(a,b,c,d,e);
     printf("%lld %lld" , min_sum , max_sum);
    return 0;


}
    
     long long int min( long long int a , long long int b , long long int c ,long long int d , long long int e)
        {
        if(a<=b&&a<=c&&a<=d&&a<=e)
            {
            return a;
        }
        else if(b<=a&&b<=c&&b<=d&&b<=e)
            {
            return b;
        }
            else if(c<=a&&c<=b&&c<=d&&c<=e)
                {
            return c;
            }
            else if(d<=a&&d<=b&&d<=c&&d<=e)
                {
            return d;
            }
            else if(e<=a&&e<=b&&e<=c&&e<=d)
                {
            return e;
            }
          return 0;

                        }
     long long int max( long long int a , long long int b , long long int c , long long int d ,long long int e)
        {
        if(a>=b&&a>=c&&a>=d&&a>=e)
            {
            return a;
        }
        else if(b>=a&&b>=c&&b>=d&&b>=e)
            {
            return b;
        }
            else if(c>=a&&c>=b&&c>=d&&c>=e)
           {
                return c;
            }
            else if(d>=a&&d>=b&&d>=c&&d>=e)
                {
            return d;
            }
            else if(e>=a&&e>=b&&e>=c&&e>=d)
                {
            return e;
            }
          return 0;

                      }
           
    
