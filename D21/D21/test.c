//��̬�ڴ����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//<malloc.h>

//1.malloc �� free
//void* malloc(size_t size);
//malloc ���ڴ�����һ���������õĿռ�,������ָ�����ռ��ָ��
//A.������ٳɹ�,�򷵻�һ��ָ�򿪱ٺÿռ��ָ��
//B.�������ʧ��,�򷵻�һ��NULLָ��,���malloc�ķ���ֵһ��Ҫ�����
//C.����ֵ��������void*,����malloc��������֪�����ٿռ������,������ʹ�õ�ʱ����ʹ�����Լ�������
//D.�������sizeΪ0,malloc����Ϊ�Ǳ�׼δ�����,ȡ���ڱ�����.
//free ��̬�ڴ���ͷźͻ���
//void free(void* ptr)
//A.�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵ�,free��������Ϊ��δ�����
//B.�������ptr��NULLָ��,����ʲô�¶�����

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//int arr[num] = { 0 };num �����ǳ���
//	int* ptr = NULL;
//	int i;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)
//	{
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i)=i;
//       printf("%d", *(ptr + i));
//		}
//		
//	}
//	free(ptr);
//	ptr = NULL;
//	system("pause");
//	return 0;
//}

//2.calloc
//A.Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ�,���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
//B.�뺯��malloc������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��ȫΪ0.
//int main1()
//{
//	int i = 0;
//	int *p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

//3.realloc �Զ�̬�����ڴ��С�ĵ���
//void* realloc(void* ptr,size_t size)
//A.ptr��Ҫ�������ڴ��ַ
//B.size ����֮���´�С
//C.����ֵΪ����֮����ڴ���ʼλ��
//D.�����������ԭ�ڴ�ռ��С�Ļ�����,���Ὣԭ���ڴ��е������ƶ����µĿռ�
//E.realloc �����ڴ�ռ�����������
 //  a.ԭ�пռ�֮�����㹻��Ŀռ�(��չ�ڴ�ֱ����ԭ���ڴ�֮��ֱ��׷���ڴ�,ԭ���ռ�����ݲ������仯)
 //  b.ԭ�пռ�֮��û���㹻��Ŀռ�(�ڶѿռ�������һ�����ʴ�С�������ڴ�ռ���ʹ��,�������ص���һ���µ�ַ)
int main()
{
	int *p = NULL;
	int *q = NULL;
	int i = 0;
	p = (int *)malloc(4);
	*p = 6;
	//printf("%d", *p);
	p = (int *)realloc(p, 6 * sizeof(int));
	q = (int *)realloc(p, 6 * sizeof(int));
	if (q != NULL)
		p = q;
	for (i = 1; i < 6; i++)
		*(p+i) = i;
	for (i = 0; i < 6; i++)
		printf("%d", p[i]);
	system("pause");
	return 0;
}