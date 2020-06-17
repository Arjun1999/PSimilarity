#include  <stdio.h>
#include <stdlib.h>

int main(){
	int* a;
	int size;
	scanf("%d",&size);
	a = malloc(sizeof(int)*size);
	int i=0;
	for(i=0;i<size;i++){
		scanf("%d",&(a[i]));
	}
	int sum = 0;
	for(i=0;i<size;i++){
		sum += a[i];
	}
    printf("%d",sum);
	return 0;
}