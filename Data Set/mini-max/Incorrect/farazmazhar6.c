#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {


}

int main()
{ int a[5] ;  
  int i, j ,k, min, max, flag1,flag2,f1,f2,f;
  
  for(i=0; i<5; i++ )
   { 
       scanf("%d",&a[i]) ;
    
   } 

 min=a[0] ;
  for(j=0 ; j<5; j++)
  { 
      if(a[j]<min)
      { min=a[j];
      flag1=a[j];}
  }
  
  max=a[0] ;
  for(k=0 ; k<5; k++)
  { 
      if(a[k]>max)
      { max=a[k];
      flag2=a[k];}
  }
i=0; j=0;
f=0;
for(j=0;j<5;j++)
{ f=f + a[j] ; }
printf("%d",f);

i=flag1; j=flag2;


f1 = f-a[i];
f2 = f -a[j]; 

printf("%d  %d",a[i],a[j]);
 
  return 0 ;
  }



