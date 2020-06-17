#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
     //int c[100];
     //int mm;
    int i,j,k,l,m,o=1,sum;
      for(i=1;i<=arr_size;i++)
      {
          for(j=i+1;j<k;j++)
          {
              for(k=j+1;k<l;k++)
              {
                  for(l=k+1;l<=arr_size;l++)
                  {
                      sum= *(arr+i) + *(arr+j) + *(arr+k) + *(arr+l);
                       printf("%d\t",sum);
                      //if(sum>mm)
                        //  mm=sum;
                  }
              }
          }
      }
    /*
    printf("%d",c[1]);
    int min=c[1];
    int max=c[1];
    for(i=2;i<o;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
        if(c[i]<min)
        {
            min=c[i];
        }
    }
    */
  ///  printf("%d",mm);
    }


int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
