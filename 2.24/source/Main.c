#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	printf("input an integer:");
	scanf_s("%d",&n);
	if (n % 2 == 0)printf("%d is an even number\n", n);
	else printf("%d is an odd number\n", n);

	system("pause");
	return 0;
}