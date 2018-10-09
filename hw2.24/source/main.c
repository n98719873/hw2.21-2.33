#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,x;
	printf("叫块计: \n");
	scanf_s("%d", &num);
	x = num % 2;
	if (x == 0)
	{
		printf("硂计琌案计 \n");
	}
	else
	{
		printf("硂计琌计 \n");
	}
	system("pause");
	return 0;
}