#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long int a[5]; 


for(int i=0;i<5;i++)
scanf("%ld",&a[i]);
long int largest=a[0];
long int min=a[0];
for(int j=1;j<=4;j++)
    {

    largest=(largest>a[j]?largest:a[j]);
    min=(min<a[j]?min:a[j]);
}
     long int temp=0;

     for(int i=0;i<5;i++)
        {
        temp+=a[i];
        }

    printf("%ld %ld",temp-largest,temp-min);

return 0;

}
