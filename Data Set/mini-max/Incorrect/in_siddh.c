#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int arrr[5];
  int a,b,c,d,e,f,i,g,h,sum,num;
    sum=0;
    num=0;
  for(a=0;a<5;a++) 
  {
       scanf("%d",&arrr[a]);
        sum=sum+arrr[a];
        num=num+arrr[a];
  }
  for(i=0;i<5;i++)
  {for(c=0;c<5;c++)
  { 
      for(d=0;d<5;d++)
  { 

  
  
       if(arrr[c]>arrr[d+1]) 
    {
        //c is the greatest
     e=arrr[c];
     if(e<arrr[c-i])
       e=arrr[c-i];
     
       }
    else
   {
         f=arrr[d+1];
       if(f<arrr[d+1-i])
        f=arrr[d+1-i];   
   }
  
   if (arrr[c] < arrr[d + 1])
    {
     // c is the lowest
     g = arrr[c];
     if(g>arrr[c-i])
       g=arrr[c-i];
     }
    else
     {
     h = arrr[d + 1];
     if(h>arrr[d+1-i])
     h=arrr[d+1-i];
   }

  } 
   
  }}
if(e>f)
{ 
     sum=sum-e;
}
else
{
    sum=sum-f;
}


if(g>h)
{
    num=num-h;

}
else
{
    num=num-g;
}
 printf("%d %d",sum,num);
}
