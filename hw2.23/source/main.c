#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3, max, min;
	max = 0;
	min = 0;
	printf("�п�J�T�ӼƦr:");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			max = num1;
			if (num2 > num3)
			{
				min = num3;
			}
			else
			{
				min = num2;
			}
		}
		else
		{
			max = num3;
			min = num2;
		}
	}
	else
	{
		if (num2 > num3)
		{
			max = num2;
			if (num1 > num3)
			{
				min = num3;
			}
			else
			{
				min = num1;
			}
		}
		else
		{
			max = num3;
			min = num1;
		}
	}
	printf("�̤j��: %d", max);
	printf("�̤p��: %d", min);
	system("pause");
	return 0;
}