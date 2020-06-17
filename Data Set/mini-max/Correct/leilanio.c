#include <stdio.h> 

int main()
{
  unsigned long long int A[5], b[5], minimo, maximo, soma=0;
  int i, j;
  
  scanf("%lld", &A[i]);
  minimo = A[0]; 
  maximo = A[0]; 
  soma += A[0];
  
  for(i = 1; i < 5; i++){
   scanf("%lld", &A[i]);
     if(maximo < A[i])
       maximo = A[i];
     if(minimo > A[i])
       minimo = A[i];
       
       soma += A[i];
  
  
  }
  printf("%lld %lld", soma-maximo, soma - minimo);
return 0;
}
