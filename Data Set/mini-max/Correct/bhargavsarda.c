#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int sum[5],temp; 
    
    int i,j;
    for(i=0;i<5;i++)
        {
        scanf("%lli",&sum[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
          if(sum[i]<sum[j])
              {
              temp=sum[i];
              sum[i]=sum[j];
              sum[j]=temp;
          }
        }
    }
    printf("%lli %lli",sum[1]+sum[2]+sum[3]+sum[4],sum[0]+sum[1]+sum[2]+sum[3]);
    
     
    return 0;
}
