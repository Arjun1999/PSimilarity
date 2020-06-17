#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
	
	scanf("%d",&n);
	int tab[n];
	int i;
	int som=0;

	for (i=0;i<n;i++)
	{
		scanf("%d",&tab[i]);
	}

	for (i=0;i<n;i++)
	{
		som = som + tab[i];
	}


	printf("%d",som);   
    return 0;
}
