#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int max=0,min=0,a; 
    long int b,sum1,sum2,sum3,sum4,sum5; 
    long int c; 
    long int d;
    long int e;
    scanf("%lu %lu %lu %lu %lu ",&a,&b,&c,&d,&e);
    sum1=a+b+c+d;
    sum2=a+b+c+e;
    sum3=a+b+d+e;
    sum4=a+c+d+e;
    sum5=b+c+d+e;
    if(sum1<sum2 && sum1<sum3 && sum1<sum4 && sum1<sum5)
        {
        min=sum1;
    }
    else if(sum2<sum1 && sum2<sum3 && sum2<sum4 && sum2<sum5)
        {
        min=sum2;
    }
     else if(sum3<sum1 && sum3<sum2 && sum3<sum4 && sum3<sum5)
        {
        min=sum3;
    }
     else if(sum4<sum1 && sum4<sum2 && sum4<sum3 && sum4<sum5)
        {
        min=sum4;
    }
    else
        {
        min=sum5;
    }
    printf("%lu\t",min);
    if(sum1>sum2 && sum1>sum3 && sum1>sum4 && sum1>sum5)
        {
        max=sum1;
    }
else if(sum2>sum1 && sum2>sum3 && sum2>sum4 && sum2>sum5)
    {
    max=sum2;
}
    else if(sum3>sum1 && sum3>sum2 && sum3>sum4 && sum3>sum5)
    {
    max=sum3;
}
    else if(sum4>sum1 && sum4>sum2 && sum4>sum3 && sum4>sum5)
    {
    max=sum4;
}
    else 
    {
    max=sum5;
}
    printf("%lu\t",max);
    
}
