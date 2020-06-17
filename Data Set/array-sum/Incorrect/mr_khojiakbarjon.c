#include <stdio.h>

int sum(int n , int *par)
{
    int sum=0, i  ;

    for (i=0 ; i<n ; i++)
    {
        sum+=par[i] ;
    }
    return sum ;
}

int main ()
{
    int n , ar[100] , i , add=0;

    scanf("%d", &n) ;

    for (i=0 ; i<n ; i++)
    {
        scanf("%d", &ar[i]) ;
    }
    add= sum(n , &ar) ;

    printf ("%d\n", add) ;
}
