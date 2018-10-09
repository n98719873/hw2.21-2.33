#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight,BMI;
	printf("請輸入您的身高(公尺):");
	scanf_s("%f", &height);
	printf("請輸入您的體重(公斤):");
	scanf_s("%f", &weight);
	BMI = weight / (height*height);
	printf("您的BMI為%f\n", BMI);

	if (BMI<18.5) printf("您的體重過輕\n");
	else if (BMI>18.5 && BMI < 24.9) printf("您的體重適中\n");
	else if (BMI>25 && BMI < 29.9) printf("您的體重過重\n");
	else if (BMI>30) printf("您的體重超重\n");
	system("pause");
	return 0;
}