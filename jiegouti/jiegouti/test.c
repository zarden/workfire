#include<stdio.h>
#include<stdlib.h>

 typedef struct Student{
	char name[1024];
	int id;
 }Student;

void Print(const Student* s){
	//��ӡ�ṹ���е���Ϣ
	printf("%d\n", s->id);
	printf("%d\n", s ->name);
	// s-> id = 200;
}

int main(){
	//���� struct Student
	Student student = { "ABC", 100 };
	Print(&student);
	system("pause");
	return 0;
}