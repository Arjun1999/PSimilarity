#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        
    int a = 0; 
    scanf("%d",&a);
    int i = 0;
    int b = 0;
    int sum = 0;
    
    for(int i = 0; i< a;i++)
    {
        
        scanf("%d ", &b);
        sum += b;
        
        
    }
    printf("%d",sum);
}
