#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_element; 
    scanf("%d",&num_element);
    int i;
    int element;
    int sum = 0;
    for(i=0;i<num_element;i++){
        scanf("%d",&element);
        sum+=element;
    }
    printf("%d\n",sum);
    return 0;
}
