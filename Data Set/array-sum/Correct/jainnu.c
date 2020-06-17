#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,s=0;
    scanf("%d",&n);
  while(n--)
      {
      int t;
          scanf("%d",&t);
      s+=t;
  }
    printf("%d",s);
    return 0;
}
