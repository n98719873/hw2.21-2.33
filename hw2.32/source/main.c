#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight,BMI;
	printf("�п�J�z������(����):");
	scanf_s("%f", &height);
	printf("�п�J�z���魫(����):");
	scanf_s("%f", &weight);
	BMI = weight / (height*height);
	printf("�z��BMI��%f\n", BMI);

	if (BMI<18.5) printf("�z���魫�L��\n");
	else if (BMI>18.5 && BMI < 24.9) printf("�z���魫�A��\n");
	else if (BMI>25 && BMI < 29.9) printf("�z���魫�L��\n");
	else if (BMI>30) printf("�z���魫�W��\n");
	system("pause");
	return 0;
}