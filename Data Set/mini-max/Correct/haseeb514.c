#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,aa; 
    long long int b,bb; 
    long long int c,cc; 
    long long int d,dd;
    long long int e,ee;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    aa=b+c+d+e;
    bb=a+c+d+e;
    cc=a+b+d+e;
    dd=a+b+c+e;
    ee=a+b+c+d;
    if(aa<bb && aa<cc && aa<dd && aa<ee)
        {
           if(bb>cc && bb>dd && bb>ee)
        printf("%lld %lld",aa,bb);
        else if(cc>dd && cc>ee)
            printf("%lld %lld",aa,cc);
            else if(dd>ee)
            printf("%lld %lld",aa,dd);
            else
            printf("%lld %lld",aa,ee);
            }
    else if(bb<aa && bb<cc && bb<dd && bb <ee)
        {
        if(aa>cc && aa>dd && aa>ee)
        printf("%lld %lld",bb,aa);
        else if(cc>dd && cc>ee)
            printf("%lld %lld",bb,cc);
            else if(dd>ee)
            printf("%lld %lld",bb,dd);
            else
            printf("%lld %lld",bb,ee);
            }
        
        else if(cc<aa && cc<bb && cc<dd && cc<ee){
            if(aa>bb && aa>dd && aa>ee)
        printf("%lld %lld",cc,aa);
        else if(bb>dd && bb>ee)
            printf("%lld %lld",cc,bb);
            else if(dd>ee)
            printf("%lld %lld",cc,dd);
            else
            printf("%lld %lld",cc,ee);
            }
      
        else if(dd<aa && dd<bb && dd<cc && dd<ee)
            {if(aa>bb && aa>cc && aa>ee)
        printf("%lld %lld",dd,aa);
        else if(bb>cc && bb>ee)
            printf("%lld %lld",dd,bb);
            else if(cc>ee)
            printf("%lld %lld",dd,cc);
            else
            printf("%lld %lld",dd,ee);
            }
        else{
            if(aa>bb && aa>cc && aa>dd)
        printf("%lld %lld",ee,aa);
        else if(bb>cc && bb>dd)
            printf("%lld %lld",ee,bb);
            else if(cc>dd)
            printf("%lld %lld",ee,cc);
            else
            printf("%lld %lld",ee,dd);
            }
       
    return 0;
}
