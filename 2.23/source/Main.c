#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c, d[3];
	printf("input 3 number:");
	scanf_s("%d%d%d",&a,&b,&c);
	d[0] = a; d[1] = b; d[2] = c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (d[i] > d[j]) {
				d[i] = d[i] + d[j];
				d[j] = d[i] - d[j];
				d[i] = d[i] - d[j];
			}
		}
	}
	printf("the biggest number is %d\n",d[0]);
	printf("the smallest number is %d\n",d[2]);
	system("pause");
	return 0;
}