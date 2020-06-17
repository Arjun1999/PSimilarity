#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int nbOfElems, i;
    int inputread;
    int sum = 0;

    scanf("%d",&nbOfElems);

    for (i=0; i < nbOfElems; i++)
    {
      scanf("%d",&inputread);
      sum += inputread;
    }
    printf("%d", sum);
    return 0;
}
