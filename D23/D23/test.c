#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//1.向文件读写字符
//fgetc(fp); 从fp指向的文件读入一个字符,成功带回所读字符串,失败返回EOF(即-1)
//fputc(ch,fp); 把字符ch写到文件指针变量fp所指向的文件中,成功返回值是输出的字符,失败返回EOF(即-1)

//2.向文件读写一个字符串
//fgets(str,n,fp); 从fp指向的文件读入一个长度为(n-1)的字符串,存放到字符数组str中
//成功返回str数组首元素地址,失败返回NULL
//fputs(str,fp); 把str所指向的字符串写到文件指针变量fp所指向的文件,输出成功返回0,否则返回非0值

//3.用格式化的方式读写文件
//fprintf(fp,"%d, %6.2f", i,f); 将变量i和f的值按%d和%6.2f 的格式输出到fp指向的文件中
//fscanf(fp,"%d,%f",&i,&f); 磁盘文件中若有字符"3,4.5";则从磁盘文件中读取整数3给整型变量i,读取实数4.5给浮点型变量f

//4.用二进制方式向文件读写一组数据
//fread(f,4,10,fp); 从fp所指向的文件读入10个4个字节的数据,存储到数组f中
//fread,fwrite 函数的类型为int型,如果fread或fwrite函数执行成功,返回值为一个整数,即输入或输出数据项的个数

//文件位置标记的定义
//(1) rewind 函数 使文件位置标记指向文件开头,没有返回值
//(2)fseek 函数改变文件位置标记,一般用于二进制文件 
//fseek(fp,100L,0); 将文件位置标记向前移动到离文件开头100个字节处.
//(3) ftell 函数 测定文件位置标记的当前位置

//例1. 从键盘输入一些字符,逐个把它们送到磁盘上去,直到用户输入一个"#"为止.
#if 0
int main()
{
	FILE* fp;
	char ch, filename[10];
	printf("请输入所用的文件名:");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	ch = getchar();
	printf("请输入一个准备存储到磁盘的字符串(以#结束):");
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
//2.将一个磁盘文件中的信息复制到另一个磁盘文件中.
int main()
{
	FILE * in, *out;
	char ch, infile[10], outfile[10];
	printf("输入读入文件的名字:");
	scanf("%s", infile);
	printf("输入输出文件的名字:");
	scanf("%s", outfile);
	if ((in = fopen(infile, "r")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	if ((out = fopen(infile, "w")) == NULL)
	{
		printf("无法打开此文件\n");
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