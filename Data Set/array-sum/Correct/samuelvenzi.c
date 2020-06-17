#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero_de_elementos;
	int array[1000];
	int contador, resultado = 0;

	scanf("%d", &numero_de_elementos);
	for(contador = 0;contador < numero_de_elementos;contador++){
		
		scanf("%d", &array[contador]);
		resultado = resultado + array[contador];
	}
	printf("%d", resultado);

    return 0;
}
