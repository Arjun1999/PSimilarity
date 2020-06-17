#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    double max,min,sum1,sum2,sum3,sum4,sum5;
    if(a>=1&&a<=1000000000&&b>=1&&b<=1000000000&&c>=1&&c<=1000000000&&d>=1&&d<=1000000000){sum1 = a+b+c+d;}
    if(e>=1&&e<=1000000000&&b>=1&&b<=1000000000&&c>=1&&c<=1000000000&&d>=1&&d<=1000000000){sum2=b+c+d+e;}
    if(a>=1&&a<=1000000000&&e>=1&&e<=1000000000&&c>=1&&c<=1000000000&&d>=1&&d<=1000000000){sum3=a+c+d+e;}
    if(a>=1&&a<=1000000000&&b>=1&&b<=1000000000&&e>=1&&e<=1000000000&&d>=1&&d<=1000000000){sum4=a+b+d+e;}
    if(a>=1&&a<=1000000000&&b>=1&&b<=1000000000&&c>=1&&c<=1000000000&&e>=1&&e<=1000000000){sum5=a+b+c+e;}
    max=sum1;
    if(sum2>sum1&&sum2>sum3&&sum2>sum4&&sum2>sum5){max=sum2;}
    if(sum3>sum1&&sum3>sum2&&sum3>sum4&&sum3>sum5){max=sum3;}
    if(sum4>sum1&&sum4>sum3&&sum4>sum2&&sum4>sum5){max=sum4;}
    if(sum5>sum1&&sum5>sum3&&sum5>sum4&&sum5>sum2){max=sum5;}
    min=0;
    if(sum2<sum1&&sum2<sum3&&sum2<sum4&&sum2<sum5){min=sum2;}
    if(sum1<sum2&&sum1<sum3&&sum1<sum4&&sum1<sum5){min=sum1;}
    if(sum3<sum1&&sum3<sum2&&sum3<sum4&&sum3<sum5){min=sum3;}
    if(sum4<sum1&&sum4<sum3&&sum4<sum2&&sum4<sum5){min=sum4;}
    if(sum5<sum1&&sum5<sum3&&sum5<sum4&&sum5<sum2){min=sum5;}
    if(a==b&&b==c&&c==d&&d==e){min=sum1;max=min;}
    printf("%.0lf %.0lf",min,max);
    return 0;
}
