#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   // int *arr = malloc(sizeof(int) * 5);
    //for(int arr_i = 0; arr_i < 5; arr_i++){
      // scanf("%d",&arr[arr_i]);
    //}
     long int a,b,c,d,e,s1,s2,s3,s4,s5,m,n;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    s1=b+c+d+e;s2=a+c+d+e;s3=a+b+d+e;s4=a+b+c+e;s5=a+b+c+d;
    if(s1<s2&&s1<s3&&s1<s4&&s1<s5)
        m=s1;
    else if(s2<s1&&s2<s3&&s2<s4&&s2<s5)
        m=s2;
    else if(s3<s2&&s3<s1&&s3<s4&&s3<s5)
        m=s3;
    else if(s4<s2&&s4<s3&&s4<s1&&s4<s5)
        m=s4;
    else
        m=s5;
     if(s1>s2&&s1>s3&&s1>s4&&s1>s5)
        n=s1;
    else if(s2>s1&&s2>s3&&s2>s4&&s2>s5)
        n=s2;
    else if(s3>s2&&s3>s1&&s3>s4&&s3>s5)
        n=s3;
    else if(s4>s2&&s4>s3&&s4>s1&&s4>s5)
        n=s4;
    else
        n=s5; 
        printf("%ld %ld",m,n);
    return 0;
}
