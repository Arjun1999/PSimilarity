#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE 1000

int main() {
    int iCount=0;
    unsigned int Array[MAX_ARRAY_SIZE];
    unsigned int Total = 0;
    
    scanf("%d\n", &iCount);
    
    if(iCount < 0)
        iCount = 0;
    if(iCount > MAX_ARRAY_SIZE)
        iCount = MAX_ARRAY_SIZE;
    
    for(int i=0; i < iCount; i++)
        {
        scanf("%u", &Array[i]);
        Total += Array[i];
    }
    
    printf("%u", Total);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
