#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int NbInt, Sum;
    scanf("%d",&NbInt);
    
    Sum=0;
    while( NbInt--!=0 ){
        int TmpInt;
        scanf("%d",&TmpInt);
        Sum+=TmpInt;
    }
    
    printf("%d\n",Sum);
    return 0;
}
