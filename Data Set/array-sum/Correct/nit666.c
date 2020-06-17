#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num, sum, i, temp;
	
	scanf("%d\n", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &temp);
		sum += temp;
	}
        	
	printf("%d", sum);
	
    return 0;
}