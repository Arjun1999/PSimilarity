#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e,a1,a2,a3,a4,a5;
    scanf("%ld %ld %ld %ld %ld",&a, &b, &c, &d, &e);
    a1=a+b+c+d;
    a2=b+c+d+e;
    a3=c+d+e+a;
    a4=d+e+a+b;
    a5=e+a+b+c;
    if((a1<a2)&&(a1<a3)&&(a1<a4)&&(a1<a5))
        printf("%ld",a1);
    else if((a2<a1)&&(a2<a3)&&(a2<a4)&&(a2<a5))
            printf("%ld",a2);
         else if((a3<a2)&&(a3<a1)&&(a3<a4)&&(a3<a5))
                 printf("%ld",a3);
               else if((a4<a2)&&(a4<a3)&&(a4<a1)&&(a4<a5))
                       printf("%ld",a4);
                    else
                       printf("%ld",a5);
        printf(" ");
      if((a1>a2)&&(a1>a3)&&(a1>a4)&&(a1>a5))
        printf("%ld",a1);
      else if((a2>a1)&&(a2>a3)&&(a2>a4)&&(a2>a5))
              printf("%ld",a2);
           else if((a3>a2)&&(a3>a1)&&(a3>a4)&&(a3>a5))
                   printf("%ld",a3);
                 else if((a4>a2)&&(a4>a3)&&(a4>a1)&&(a4>a5))
                         printf("%ld",a4);
                      else
                         printf("%ld",a5);
        
   
    return 0;
}
