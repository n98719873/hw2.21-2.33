#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mileage, hm, avg, parking, toll,spend;//���{,how much,average����,�����O,�q��O,��O
	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &mileage);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &hm);
	printf("�����@���ɯ��p�X����:");
	scanf_s("%f", &avg);
	printf("�@��Ѫ������O:");
	scanf_s("%f", &parking);
	printf("�@��Ѫ��q��O:");
	scanf_s("%f", &toll);
	spend = (mileage / avg)*hm + parking + toll;
	printf("�@��ѤU�Ӫ���O:%f\n",spend);
	
	system("pause");
	return 0;
}