#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,x;
	printf("�п�J�@�ӼƦr: \n");
	scanf_s("%d", &num);
	x = num % 2;
	if (x == 0)
	{
		printf("�o�ӼƭȬO�@�Ӱ��� \n");
	}
	else
	{
		printf("�o�ӼƭȬO�@�ө_�� \n");
	}
	system("pause");
	return 0;
}