#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int i,g,sum=0,w;
  scanf("%d",&i );
    
  
  for(g=0;g<i;g++){
    scanf("%d",&w);
    sum+=w;
  }
      printf("%d",sum);
    return sum;
}
