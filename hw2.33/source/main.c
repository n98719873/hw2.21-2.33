#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mileage, hm, avg, parking, toll,spend;//里程,how much,average平均,停車費,通行費,花費
	printf("一整天的總里程數:");
	scanf_s("%f", &mileage);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &hm);
	printf("平均一公升能行駛幾公里:");
	scanf_s("%f", &avg);
	printf("一整天的停車費:");
	scanf_s("%f", &parking);
	printf("一整天的通行費:");
	scanf_s("%f", &toll);
	spend = (mileage / avg)*hm + parking + toll;
	printf("一整天下來的花費:%f\n",spend);
	
	system("pause");
	return 0;
}