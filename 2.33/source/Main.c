#include<stdio.h>
#include<stdlib.h>
int main(void) {
	//t=Total Distance by Day**c=Cost by Gas**d=Distance by single gas
	//p=Parking Fee**f=Passing Fee
	int t, c, d, p, f,m=0;
	printf("input Total Distance by Day(Kilometers): ");
	scanf_s("%d",&t);
	printf("input Cost by Gas: ");
	scanf_s("%d", &c);
	printf("input Distance by single gas: ");
	scanf_s("%d", &d);
	printf("input Parking Fee: ");
	scanf_s("%d", &p);
	printf("input Passing Fee: ");
	scanf_s("%d", &f);
	if (t / d < 1)m += c;
	else m += (t / d)*c;
	m += p + f;
	printf("The Cost of One Day is %d\n",m);
	system("pause");
	return 0;
}