#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    /*long int b; 
    long int c; 
    long int d;
    long int e;*/
    long long int s=0,t=0;
    int i;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);}
    for(i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
            {
            if(a[i]>a[j])
                {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
        for(int i=0;i<5;i++)
            {
            s+=a[i];
        }
        printf("%lld %lld",s-a[0],s-a[4]);
        
    
    return 0;
}
