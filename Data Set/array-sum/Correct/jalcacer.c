#include <stdio.h>

int main()
{
	int integer_N;
    int value_A;
    unsigned long long suma = 0;
    int indice = 0;
    
    scanf("%d", &integer_N);
    
    while(indice < integer_N)
    {
        scanf("%d ", &value_A);
        
        suma += value_A;
        
        indice++;
    }
    
    printf("%lld\n", suma);
    
    
    
	return 0;
}