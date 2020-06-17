#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int input_numb,tab[1000];
    int i;
    int sum = 0;
    scanf("%d",&input_numb);
    for (i=0;i<input_numb;i++)
    {scanf("%d",&tab[i]);
     sum=sum+tab[i];}
    printf("%d",sum);
        
     return 0;
    }
    
 

