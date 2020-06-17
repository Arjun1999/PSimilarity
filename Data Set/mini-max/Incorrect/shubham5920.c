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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int max=a;
    long int min=a;
    long int sum=0;
    long int mini=0;
   
    if(b>max)
        {
        max=b;
        
    }
    if(c>max)
        {
        max=c;
        
    }
    if(d>max)
        {
        max=d;
        
    }
    if(e>max)
        {
        max=e;
        
    }
    
    else
        {
        max=a;
    }
    
    //min
    if(b<min)
        {
        min=b;
    }
    
     if(c<min)
        {
        min=c;
    }
    
     if(d<min)
        {
        min=d;
    }
    
     if(e<min)
        {
        min=e;
    }
    else
        {
        min=a;
        
    }
  if(a!=max)
      {
      sum=sum+a;
  }
    if(b!=max)
      {
      sum=sum+b;
  }
    if(c!=max)
      {
      sum=sum+c;
  }if(d!=max)
      {
      sum=sum+d;
  } 
    if(e!=max)
      {
      sum=sum+e;
    }
        
        //min
        
        if(a!=min)
      {
      mini=mini+a;
  }
         if(b!=min)
      {
      mini=mini+b;
  }
         if(c!=min)
      {
      mini=mini+c;
  }
         if(d!=min)
      {
      mini=mini+d;
  } 
        if(e!=min)
      {
      mini=mini+e;
  }
  printf("%lld %lld",sum,min);
    return 0;
}
