#define _CRT_SECUER_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, n = 0;  //n�Ľײ�
	int j = 1;

	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		j *= i;	
	printf("%d", j);

	//int i, n = 0;  //1---n!�ĺ�
	//int sum = 0 , j = 1;
	//scanf_s("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	j *= i;
	//	sum += j;
	//}
	//printf("sum = %d", sum);

	return 0;
}


