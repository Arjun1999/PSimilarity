#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int max_sum(long int sumas[5]);
long int min_sum(long int sumas[5]);

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    int contador;
    contador = 0;
    long int sumas[5];

    for(contador = 0; contador < 5; contador ++)
    {
        switch (contador)  {
            case 0 :
                    sumas[contador] = b+c+d+e;
                    break;
            case 1 :
                    sumas[contador] = c+d+e+a;
                    break;
            case 2:
                    sumas[contador] = d+e+a+b;
                    break;
            case 3:
                    sumas[contador] = e+a+b+c;
                    break;
            case 4:
                    sumas[contador] = a+b+c+d;
                    break;
            default: break;
        }
    }

    printf("%ld %ld", min_sum(sumas), max_sum(sumas));

    return 0;
}

long int max_sum(long int sumas[5]){
    long int mayor;
    mayor = 0;

    int contador;

    for(contador = 0; contador < 5; contador ++){
        //printf("%ld\t", sumas[contador]);
        if (sumas[contador] > mayor){
            mayor = sumas[contador];
        }
    }
    return mayor;
}

long int min_sum(long int sumas[5]){
    long int menor;
    menor = 0;

    int contador;
    menor = sumas[0];
    for(contador = 0; contador < 5; contador ++){
        //printf("%ld\t", sumas[contador]);
        if (sumas[contador] < menor){
            menor = sumas[contador];
        }
    }
    return menor;
}