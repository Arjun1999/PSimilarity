#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int isize,i,ires=0;
    scanf("%d",&isize);
    int inum[isize];
     for(i=0;i<isize;i++)
      {
         scanf("%d",&inum[i]);
         ires=ires+inum[i];
     }
      printf("%d\n",ires);
    return 0;
}
