#include <stdio.h>

int main(void){
  int N, i;
  int res, aux;
  
  scanf("%d", &N);
      
  for(i = 0; i<N; i++){
    scanf("%d", &aux);
    res = res+aux;
    
  }

  printf("%d", res);
}

