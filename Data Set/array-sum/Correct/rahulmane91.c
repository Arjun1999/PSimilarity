#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numbers;
    scanf("%d", &numbers);
    
    int sum = 0;
    for (int i=0;i<numbers;i++)
        {
        int temp;
        scanf("%d", &temp);
        
        sum += temp;
    }
    
    printf("%d",sum);
    return 0;
}
