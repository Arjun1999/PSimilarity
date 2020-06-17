#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,s[5]={0,0,0,0,0}; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int z[5]={a,b,c,d,e};
    long int max,min;
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
            {
            if(j!=i)
            {
            s[i]=s[i]+z[j];
            }
        }
        }
            max=s[0];
            min=s[0];
            for(int i=1;i<5;i++)
                {
                if(s[i]>max)
                    {
                    max=s[i];
                }
                if(s[i]<min)
                    {
                    min=s[i];
                }
            }
        
    
    printf("%ld %ld",min,max);
    return 0;
}
