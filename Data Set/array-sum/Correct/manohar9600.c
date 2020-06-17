#include <stdio.h>
int main() {
    int q;
    scanf("%d",&q);
    int a[q],w=0;
    while(q--){
    	scanf("%d",&a[q]);
        w=w+a[q];
    }
    printf("%d",w);
    return 0;    
}
