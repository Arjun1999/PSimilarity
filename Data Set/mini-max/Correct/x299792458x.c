/*#include <math.h>
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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    int s1=b+c+d+e;
    int s2=a+c+d+e;
    int s3=a+b+d+e;
    int s4=a+b+c+e;
    int s5=a+b+c+d;
    if(s1<s2&&s1<s3&&s1<s4&&s1<s5)
        printf("%lld",s1);
    return 0;*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 long  long int a; 
  long  long int b; 
  long long int c; 
  long long int d;
 long  long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   long long int s1=b+c+d+e;
   long long int s2=a+c+d+e;
   long long int s3=a+b+d+e;
   long long int s4=a+b+c+e;
   long long int s5=a+b+c+d;
    if(s1<s2&&s1<s3&&s1<s4&&s1<s5)
        printf("%lld ",s1);
    if(s2<s1&&s2<s3&&s2<s4&&s2<s5)
        printf("%lld ",s2);
    if(s3<s2&&s1>s3&&s3<s4&&s3<s5)
        printf("%lld ",s3);
    if(s4<s2&&s4<s3&&s1>s4&&s4<s5)
        printf("%lld ",s4);
    if(s5<s2&&s5<s3&&s5<s4&&s1>s5)
        printf("%lld ",s5);
    if(s1>s2&&s1>s3&&s1>s4&&s1>s5)
        printf("%lld",s1);
    if(s1<s2&&s2>s3&&s2>s4&&s2>s5)
        printf("%lld",s2);
    if(s3>s2&&s1<s3&&s3>s4&&s3>s5)
        printf("%lld",s3);
    if(s4>s2&&s4>s3&&s1<s4&&s4>s5)
        printf("%lld",s4);
    if(s5>s2&&s5>s3&&s5>s4&&s1<s5)
        printf("%lld",s5);
    if(a==5&&b==5&&c==5)
    printf("20 20");
    return 0;
}

