#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y,value;
	printf("�п�J��ӼƦr: \n");
	scanf_s("%d%d", &x, &y);

	if (x > y)
	{
		value = x%y;
		if (value == 0)
		{
			printf("num1��num2������ \n");
		}
		else
		{
			printf("num1���Onum2������ \n");
		}
	}
	else
	{
		value = y%x;
		if (value == 0)
		{
			printf("num2��num1������ \n");
		}
		else
		{
			printf("num2���Onum1������ \n");
		}
	}
	system("pause");
	return 0;
}