#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	long int num[5],aux,sumMayor=0,sumMenor=0;
	int i;
	
	for (i=0;i<5;i++){
		scanf("%li",&num[i]); 
	}
	for(i=0;i<4;i++){
		for (int j=i+1;j<5;j++){
			if(num[i]>num[j]){
				aux=num[i];
				num[i]=num[j];
				num[j]=aux;
			}
		}
	}
	for(i=0;i<4;i++){
		sumMenor= sumMenor+num[i];
	}
	for(i=1;i<5;i++){
		sumMayor= sumMayor+num[i];
	}
	printf("%li %li",sumMenor,sumMayor);
	
	
	return 0;
} 