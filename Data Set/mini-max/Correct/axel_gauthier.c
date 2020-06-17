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
    long int e;
    long int max;
    long int min;
    int i =0;
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    if (a>b)
        {
        if(a>c)
            {
            if (a>d)
                {
                if(a>e)
                    {
                    max=a;
                }
                else
                    {
                    max=e;
                }
            }
            else if(d>e)
                {
                max=d;
            }
            else
                {
                max=e;
            }
        }
        else if(c>d)
            {
            if(c>e)
                {
                max=c;          
            }
            else
                {
                max=e;
            }
        }
        else if(d>e)
            {
            max=d;
        }
        else
            {
            max=e;
        }
    }
    else if (b>c){
        if (b>d)
            {
            if(b>e)
                {
                max=b;
            }
            else
                {
                max=e;
            }
        }
        else if(d>e)
            {
            max=d;
        }
        else
            {
            max=e;
        }
        
    }
    else if(c>d)
        {
        if (c>e)
            {
            max=c;
        }
        else
            {
            max=e;
        }
        
    }
    else if(d>e)
        {
        max=d;
    }
    else
        {
        max=e;
    }
    
    //----------------------------------------------------------------------\
    
    if (a<b)
        {
        if(a<c)
            {
            if (a<d)
                {
                if(a<e)
                    {
                    min=a;
                }
                else
                    {
                    min=e;
                }
            }
            else if(d<e)
                {
                min=d;
            }
            else
                {
                min=e;
            }
        }
        else if(c<d)
            {
            if(c<e)
                {
                min=c;          
            }
            else
                {
                min=e;
            }
        }
        else if(d<e)
            {
            min=d;
        }
        else
            {
            min=e;
        }
    }
    else if (b<c){
        if (b<d)
            {
            if(b<e)
                {
                min=b;
            }
            else
                {
                min=e;
            }
        }
        else if(d<e)
            {
            min=d;
        }
        else
            {
            min=e;
        }
        
    }
    else if(c<d)
        {
        if (c<e)
            {
            min=c;
        }
        else
            {
            min=e;
        }
        
    }
    else if(d<e)
        {
        min=d;
    }
    else
        {
        min=e;
    }
    
    printf("%ld %ld", a+b+c+d+e-max, a+b+c+d+e-min);
    
    return 0;
}
