#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int s1=0,s2=0,s3=0,s4=0,s5=0,ln,sn,i;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
        for(i=1;i<5;i++)
        {
            s1=s1+arr[i];
        }
        for(i=0;i<5;i++)
        {
            if(i=1)
                continue;
            s2=s2+arr[i];
        }
        for(i=0;i<5;i++)
        {
            if(i=2)
                continue;
            s3=s3+arr[i];
        }
        for(i=0;i<5;i++)
        {
            if(i=3)
                continue;
            s4=s4+arr[i];
        }
        for(i=0;i<5;i++)
        {
            if(i=4)
                continue;
            s5=s5+arr[i];
        }
       if(s1>s2)
       {
           ln=s1;
           sn=s2;
       }
    else
    {
        ln=s2;
        sn=s1;
    }
    if(ln<s3)
        ln=s3;
    if(ln<s4)
        ln=s4;
    if(ln<s5)
        ln=s5;
    if(sn>s3)
        sn=s3;
    if(sn>s4)
        sn=s4;
    if(sn>s5)
        sn=s5;
    
        
    printf("%d",ln);
    printf("%d",sn);
    return 0;
}
