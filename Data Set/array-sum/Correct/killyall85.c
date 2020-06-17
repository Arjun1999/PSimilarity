#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int wieoft=0,summe=0,i=0,eingabe=0; 
fscanf(stdin, "%d",&wieoft);
    for  (i=0;i<wieoft;i++)
    {
        fscanf(stdin,"%d",&eingabe);
        summe += eingabe;
    }
    fprintf(stdout,"%d",summe);
    
    return 0;
}
