#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//1.���ļ���д�ַ�
//fgetc(fp); ��fpָ����ļ�����һ���ַ�,�ɹ����������ַ���,ʧ�ܷ���EOF(��-1)
//fputc(ch,fp); ���ַ�chд���ļ�ָ�����fp��ָ����ļ���,�ɹ�����ֵ��������ַ�,ʧ�ܷ���EOF(��-1)

//2.���ļ���дһ���ַ���
//fgets(str,n,fp); ��fpָ����ļ�����һ������Ϊ(n-1)���ַ���,��ŵ��ַ�����str��
//�ɹ�����str������Ԫ�ص�ַ,ʧ�ܷ���NULL
//fputs(str,fp); ��str��ָ����ַ���д���ļ�ָ�����fp��ָ����ļ�,����ɹ�����0,���򷵻ط�0ֵ

//3.�ø�ʽ���ķ�ʽ��д�ļ�
//fprintf(fp,"%d, %6.2f", i,f); ������i��f��ֵ��%d��%6.2f �ĸ�ʽ�����fpָ����ļ���
//fscanf(fp,"%d,%f",&i,&f); �����ļ��������ַ�"3,4.5";��Ӵ����ļ��ж�ȡ����3�����ͱ���i,��ȡʵ��4.5�������ͱ���f

//4.�ö����Ʒ�ʽ���ļ���дһ������
//fread(f,4,10,fp); ��fp��ָ����ļ�����10��4���ֽڵ�����,�洢������f��
//fread,fwrite ����������Ϊint��,���fread��fwrite����ִ�гɹ�,����ֵΪһ������,����������������ĸ���

//�ļ�λ�ñ�ǵĶ���
//(1) rewind ���� ʹ�ļ�λ�ñ��ָ���ļ���ͷ,û�з���ֵ
//(2)fseek �����ı��ļ�λ�ñ��,һ�����ڶ������ļ� 
//fseek(fp,100L,0); ���ļ�λ�ñ����ǰ�ƶ������ļ���ͷ100���ֽڴ�.
//(3) ftell ���� �ⶨ�ļ�λ�ñ�ǵĵ�ǰλ��

//��1. �Ӽ�������һЩ�ַ�,����������͵�������ȥ,ֱ���û�����һ��"#"Ϊֹ.
#if 0
int main()
{
	FILE* fp;
	char ch, filename[10];
	printf("���������õ��ļ���:");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	ch = getchar();
	printf("������һ��׼���洢�����̵��ַ���(��#����):");
	ch = getchar();
	while (ch !='#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}
#endif

#if 1
//2.��һ�������ļ��е���Ϣ���Ƶ���һ�������ļ���.
int main()
{
	FILE * in, *out;
	char ch, infile[10], outfile[10];
	printf("��������ļ�������:");
	scanf("%s", infile);
	printf("��������ļ�������:");
	scanf("%s", outfile);
	if ((in = fopen(infile, "r")) == NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	if ((out = fopen(infile, "w")) == NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	while (!feof(in))
	{
		ch = fgetc(in);
		fputc(ch, out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;
}
#endif