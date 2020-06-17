#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long sum(long a,long b,long c ,long d){
    return a+b+c+d;
}
int main(){
    long int arr[4];
    long int a;
    long int b; 
    long int c,maxsum=0,minsum=0; 
    long int d;
    long int e;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
      arr[0]=sum(a,b,c,d);
      arr[1]=sum(b,c,d,e);
      arr[2]=sum(c,d,e,a);
      arr[3]=sum(d,e,a,b);
      arr[4]=sum(a,b,c,e);
    int j=0;
    while(j!=4){
         int i;
        if(arr[i]>=maxsum){
           maxsum=arr[i];
        }
        else if(arr[i]<=minsum){
            minsum=arr[i];
        }
        else{
            j++;
        }
    }
    
    
    
    return 0;
}
