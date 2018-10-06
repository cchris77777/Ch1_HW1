//2.32***************
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float h,w,b;
	printf("input Height in Meters: ");
	scanf_s("%f",&h);
	printf("input Weight in Kilograms: ");
	scanf_s("%f", &w);
	b = w / (h*h);
	printf("Your BMI is %f",b);
	system("pause");
	return 0;
}