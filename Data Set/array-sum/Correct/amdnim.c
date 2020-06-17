#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int len;
    scanf("%d",&len);
    int tot = 0,temp;
    for(int i = 0; i < len; i++)
    {
        scanf("%d",&temp);
        tot += temp;
    }
    printf("%d",tot);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
