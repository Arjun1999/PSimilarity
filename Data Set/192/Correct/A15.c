#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Verificar si la n es un numero posible de representar
por dos numeros triangular que son k(k+1)/2 (puede ser numeros iguales)
codeforces.com problemset 192A
*/

int main(){
	long *A,n,tope,i;
	int bandera=0,count=0;
	scanf("%d",&n);
	tope = (sqrt(2*n));
	A = (long *)malloc(sizeof(long)*(tope+1));
	for(i=0; i<=tope; i++){
		A[i] = (i*(i+1))/2;
	}
	i=1;
	while(i<=tope){
		if(A[i] + A[tope] == n){
			bandera = 1;
			break;
		}else if(A[i] + A[tope] < n){
			i++;
		//	if(count==1){
		//		count--;
		//	}
		}else if(A[i] + A[tope] > n){
			tope--;
		//	count++;
			//if(count>1){
		//		i--;
		//	}
		}
	}
	if(bandera == 1){
		printf("YES");
	}else{
		printf("NO");
	}
	free(A);
	return 0;
}