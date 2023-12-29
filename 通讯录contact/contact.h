#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000
//���͵Ķ���
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];//�洢ͨѶ¼��Ա��Ϣ
	int sz;//��¼ͨѶ¼��Ա����
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//ͨѶ¼������Ա
void AddContact(Contact *pc);

//��ӡͨѶ¼��Ա��Ϣ
void PrintContact(const  Contact* pc);

//ɾ��ͨѶ¼��Ա��Ϣ
void DelContact(Contact* pc);

//����ͨѶ¼��Ա��Ϣ
void SearchContact(Contact* pc);

//�޸�ͨѶ¼��Ա��Ϣ
void ModifyContact(Contact* pc);

//����ͨѶ¼��Ա
void SortContact(Contact* pc);