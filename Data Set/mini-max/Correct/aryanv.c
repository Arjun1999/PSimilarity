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
    int r;
    long int e,k;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    int p[5]={a,b,c,d,e};
    for(int i=1;i<5;i++)
       {
       k=p[i];
            for(int j=0;j<i;j++)
                {
                if(p[i]<p[j])
                {
                    r=i;
                    while(r>j)
                        {
                        p[r]=p[r-1];
                        r--;
                    }
                    p[j]=k;
                    break;
                }   
            }
    }
    printf("%ld ",p[0]+p[1]+p[2]+p[3]);
    printf("%ld",p[1]+p[2]+p[3]+p[4]);
    return 0;
}
