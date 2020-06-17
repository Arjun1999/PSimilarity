#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#include <process.h>


int sum(int* p, int n) {
	int s1 = 0;
	for (int i = 0; i<n; i++) {
		s1 += p[i];
		//printf("%d", p[i]);

	}
	return s1;
}


int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n = 0, s = 0;
	int *p;
	printf("enter the size");
	scanf("%d", &n);
	p = (int*)calloc(n, sizeof(int));
	for (int i = 0; i<n; i++) {
		printf("enter the values\n");
		scanf("%d", &p[i]);		
	}
	s = sum(p,n);
	printf("%d", s);
	//system("pause");
	return 0;
}
