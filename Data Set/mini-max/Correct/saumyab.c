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
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int max;
    long int min;
    int i,j;
 long int ai[5]={a,b,c,d,e},sum;
      sum=a+b+c+d+e;
    //  printf("%ld %ld",ai[0],ai[1]);
    min= a;max= 0;
     for(i=0;i<5;i++)
         { 
		   if(max<ai[i])
            max=ai[i];
           if(min>ai[i])
              {
			   min=ai[i];
			   //printf("%ld\n",min);
			  }
	    }
         
          printf("%ld %ld",sum-max,sum-min);
    return 0;

}