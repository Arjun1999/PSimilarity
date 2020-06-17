#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
int main()
    {
    int i,j,sum;
	char num[i];
    char p[i];
    scanf(" %d",&i);
    for( j=1;j<=i;j++ ){
        
        scanf("%d",&num[j]);
    
    }
    for( j=2;j<=i;j++ ){
          num[j] = num[j-1] + num[j];
		}
    printf("%d",num[i]);
    

    return 0;
}