#include<stdio.h>
#include<math.h>

//����������С����
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a; 
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//
//	return 0;
//}

//��ӡ1-100  3�ı���
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			a++;
//		}
//	}
//	printf("%d\n", a);
//	return 0;
//}

//���Լ�����㷨
//int main()
//{
//	int a = 0, b = 0, k = 0;
//	scanf_s("%d%d", &a, &b);
//	while (a % b) 
//	{
//		k = a % b;
//		a = b;
//		b = k;
//	}
//	printf("���Լ���ǣ�%d", b);
//
//	return 0;
//}


//1000-2000�������ӡ
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("һ����%d�����ꡣ", count);
//	return 0;
//}




//1-200������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >sqrt(i) )
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\nһ����%d��", count);
	return 0;
}










//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("�ܼƸ�����%d", count);
//	return 0;
//}