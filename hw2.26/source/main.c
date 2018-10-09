#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y,value;
	printf("叫块ㄢ计: \n");
	scanf_s("%d%d", &x, &y);

	if (x > y)
	{
		value = x%y;
		if (value == 0)
		{
			printf("num1num2计 \n");
		}
		else
		{
			printf("num1ぃ琌num2计 \n");
		}
	}
	else
	{
		value = y%x;
		if (value == 0)
		{
			printf("num2num1计 \n");
		}
		else
		{
			printf("num2ぃ琌num1计 \n");
		}
	}
	system("pause");
	return 0;
}