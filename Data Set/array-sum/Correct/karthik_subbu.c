#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   
 
int no, sums = 0, c, array[1000];
scanf("%d", &no);
for (c = 0; c < no; c++)
{
scanf("%d", &array[c]);
sums = sums + array[c];
}
printf("%d\n",sums);
 

    return 0;
}
