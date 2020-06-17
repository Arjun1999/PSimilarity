#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int intQuantity;
    scanf("%d",&intQuantity);
    int sume = 0;
    
    for(int i=0;i<intQuantity; i++)
    {
        int interResult;
        scanf("%d", &interResult);
        sume += interResult;
    }
    
    printf("%d", sume);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
