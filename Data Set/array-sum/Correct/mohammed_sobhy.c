#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 

int main(void) {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       int index,result=0;        
      // printf("plz Enter the size of array:\n");
       scanf("%d",&index);
        int array[index],i,j;
        
                for(i=0;i<index;i++)
                  scanf("%d",&array[i]);             
                             
          
               for(int j=0;j<index;j++)
               
                result+=array[j];                      
           printf("%d",result);    
          
          return 0;
        }