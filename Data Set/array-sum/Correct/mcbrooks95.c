#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int t,i;
  scanf("%d",&t);
  int runningtotal = 0;
  int currentnum; 
  for ( i = 0;i < t; i++ ) {
    scanf("%d",&currentnum);
    runningtotal = runningtotal + currentnum;
  }
  printf("%d", runningtotal);
  return 0;
}
