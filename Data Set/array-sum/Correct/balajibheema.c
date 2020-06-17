#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size,sum=0;
    scanf("%d",&size);
    int a[size],i;
    if(size>=1&&size<=1000)
      {
         
    for(i=0;i<size;i++)
        {
        scanf("%d",&a[i]);
    }
    }
   
    for(i=0;i<size;i++)
        {
        if(a[i]>=0&&a[i]<=1000)
            {
        sum=sum+a[i];
    }
}
    printf("%d",sum);
  return 0;
}
