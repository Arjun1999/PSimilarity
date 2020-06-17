#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long x,y,i,s,t;
main(){
 scanf("%lld",&x);
 s=y=x;
 for(;i<4;i++){
  scanf("%lld",&t);
  x=t>x?t:x;
  y=t<y?t:y;
  s+=t;
 }
 printf("%lld %lld",s-x,s-y);
}
