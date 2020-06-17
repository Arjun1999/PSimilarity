#include <stdio.h>
int main()
{
    long int a,i,min=1000000001,max=0,tot=0; 
    for(i=0;i<5;i++)
    {
        scanf("%li",&a);
        if(a>max) max=a;
        if(a<min) min=a;
        tot+=a;
    }
    printf("%li %li",tot-max,tot-min);
    return 0;
}
