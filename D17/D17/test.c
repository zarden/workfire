//ָ��  ������*ָ�������
//Ұָ�� 1.����ָ��û�кϷ��� 2.malloc
//int *p ��ָ��
//int **p1 ˫ָ��
//int (*p2)[3] ����ָ��
//int *p3[3] ָ������ (�洢ָ�������)
//int (*p4)(int,int) ����ָ��
//int (*p4[3])(int,int) ����ָ������
//int *p5(int,int) ָ�뺯�� (����ָ��ĺ���)

//int a = 5;   һ��ָ��
//int *p = &a;

#include<stdio.h>
#include<stdlib.h>

//1.��������,�����е�ַ
//void swap(int *x, int *y)
//{
//	int t;
//	t = *x;
//	*x = *y;//ȡ* ,����ȡ����
//	*y = t;
//}
//void main()
//{
//	int a = 5, b = 7;
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//	system("pause");
//}

//2.
//void main()
//{
//	char a[] = { 1, 1, 1, 1, 1 };
//	int *p = (int *)a;//*p ָ������Ϳ�������ֽ���
//	printf("%d\n", *p);
//	system("pause");
//}

//3.�����±�,��ǰ����Ԫ�ؾ����׵�ַƫ����
//����3���ص� : ������(�±�����), ������(ռ�����ڴ�ռ�, ����洢), һ����(������Ԫ������һ��)
//һά�������ɵ�����ָ������(��ָ���1,�൱�ڼ�1��Ԫ��
//һά������ȡ��ַ,�൱�ڶ�λ������ָ��
//��ά�������ɵ�����ָ������,Ҳ��������ָ��(int (*p)[4] )����
//a[0]~*a    a[i]~*(a+i)
//a[0][0]~**a  a[i][j]~*(*(a+i)+j)
//void main()
//{
	//int a[] = { 1, 2, 3, 4, 5 };
	//int *p = (int *)(&a + 1);//pָ��5����һ��Ԫ��
	////int *p=a+1; ��a1��ַ��p
	//printf("%d\n", *(p - 1));
//	int a[3][4];
//	printf("%d,%d,%d\n", a, a[0], &a[0][0]);//a, a[0], &a[0][0]������ַһ��
//	printf("%d,%d,%d\n", a, a + 1,  &a[1]);// a + 1,  &a[1]��ַһ��
//	system("pause");
//}
//4.ð������
//void main()
//{
//	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
//	int i, j, t;
//	int n = sizeof(a) / sizeof(a[0]); 
//	int *p=a;//����a��p
//	for (i = 0; i < n - 1; ++i)
//	{
//		for (j = 0; j < n - i - 1; ++j)
//		{
//			if (a[j]<a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	//for (i = 0; i < n; ++i)
//	//{
//	//	printf("%d", a[i]);//1.a[i]2.*(a+i)3.*(p+i)4.a[i]5.*p,Ч�����
//	//	printf("\n");
//	//}
//	for (p = a; p <a+10; ++p)
//	{
//		printf("%d", *p);
//		printf("\n");
//	}
//	system("pause");
//}
//����
//void main()
//{
//	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };// �� i �� n-i-1 ����
//	int n = sizeof(a) / sizeof(a[0]);
//	int *p = a, *q = a + n - 1;//pָ��7,qָ��5
//	while (p < q)
//	{
//		int t = *p;
//		*p = *q;
//		*q = t;
//		++p;
//		--q;
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d", a[i]);
//		printf("\n");
//	}
//	system("pause");
//}
//��ָ��ʵ��ð������
void main()
{
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);
	int *p = a, *q = a + 1, *end = a + n - 1;
	for (p = a; p < a + n - 1; ++p)//����
	{
		for (q = a; q < end; ++q)//����
		{
			if (*q < *(q + 1))
			{
				int t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
			}
		}
	}
	end--;
	for (p = a; p < a + 10; ++p)
	{
		printf("%d", *p);
		printf("\n");
	}
	system("pause");
}