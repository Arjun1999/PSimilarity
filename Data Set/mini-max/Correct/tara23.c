#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   
    long int a[1000],sum1=0,sum2=0;
    int i=0,max=0,min=0,count=1;
    for(i=0;i<5;i++){
        scanf("%ld",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++){
        if(max<a[i]){
            max=a[i];
          }
        if(min>a[i])
            min=a[i];
        if(a[i]==a[i+1])
            count++;
      
    }
   
    for(i=0;i<5;i++){
        if(a[i]!=max){
            sum1+=a[i];
        }
        if(a[i]!=min){
            sum2+=a[i];
        }
    }
    if(count==4)
            {
            
            sum1=max*count;
        sum2=sum1;
    }
    
    printf("%ld\t",sum1);
    printf("%ld",sum2);
        
    
    
    
    return 0;
}
