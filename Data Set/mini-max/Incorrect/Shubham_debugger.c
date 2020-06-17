#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     int a; 
     int b; 
     int c; 
     int d;
     int e;
    int min,max;
    int aa,bb,cc,dd,ee;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    aa=b+c+d+e;
    bb=a+c+d+e;
    cc=a+b+d+e;
    dd=a+b+c+e;
    ee=a+b+c+d;
    
    if(aa>bb && aa>cc && aa>dd && aa>ee)
        {  max=aa; }
   
    
    if(bb>aa && bb>cc && bb>dd && bb>ee)
        { max=bb;}
    
    
    if(cc>bb && cc>aa && cc>dd && cc>ee)
        {  max=cc; }
   
    
    if(dd>aa && dd>cc && dd>bb && dd>ee)
        { max=dd; }
    
    
    if(ee>bb && ee>cc && ee>dd && ee>aa)
        {  max=ee; }
   
    
    
    if(aa<bb && aa<cc && aa<dd && aa<ee)
        {  min=aa; }
   
    
    if(bb<aa && bb<cc && bb<dd && bb<ee)
        { min=bb; }
    
    
    if(cc<bb && cc<aa && cc<dd && cc<ee)
        {  min=cc; }
   
    
    if(dd<aa && dd<cc && dd<bb && dd<ee)
        { min=dd;}
    
    
    if(ee<bb && ee<cc && ee<dd && ee<aa)
        {  min=ee; }
    
    printf("Max=%d Min=%d",max,min);
    
    
    
    return 0;
}
