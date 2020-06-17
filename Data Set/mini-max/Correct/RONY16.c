#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int pos=0;
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;

    long long int h1=0,h2=0,h3=0,h4=0;
    long long int max=0,min=0;

    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
        long long int arr[5];
        arr[0]=a;
         arr[1]=b;
          arr[2]=c;
           arr[3]=d;
            arr[4]=e;



    for(int i=0;i<5;i++)
        { if(arr[i]>h1)
           { h1=arr[i];
             pos=i;
           }
        }
    arr[pos]=-1;

    for(int i=0;i<5;i++)
        { if(arr[i]>h2)
           { h2=arr[i];
             pos=i;
           }
        }
    arr[pos]=-1;

    for(int i=0;i<5;i++)
        { if(arr[i]>h3)
           { h3=arr[i];
             pos=i;
           }
        }
    arr[pos]=-1;

    for(int i=0;i<5;i++)
        { if(arr[i]>h4)
           { h4=arr[i];
             pos=i;
           }
        }
    arr[pos]=-1;

    for(int i=0;i<5;i++)
        { if(arr[i]>0)
            min=arr[i];

    }

   max=h1+h2+h3+h4;
   min+=h2+h3+h4;

    printf("%lld %lld",min,max);
    return 0;

}
