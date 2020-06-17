#include <stdio.h>

int main() {

    int A=0,v,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&v);
	A+=v;
    }
    printf("%d",A);
    return 0;
}

