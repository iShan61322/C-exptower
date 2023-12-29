#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset �ڴ�����
	memset(pc->data, 0, sizeof(pc->data));
}

//ͨѶ¼������Ա
void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����");
		return;
	}
	
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ���\n");
}

//��ӡͨѶ¼��Ա��Ϣ
void PrintContact(Contact* pc)
{
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����","����","�Ա�", "�绰","��ַ");
	int i = 0;
	for (i = 0; i < pc -> sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name,
			                                        pc->data[i].age,
			                                        pc->data[i].sex,
			                                        pc->data[i].tele,
			                                        pc->data[i].addr);

	}
}

//����ͨѶ¼��Ա��Ϣ
static int FindbyName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ��ͨѶ¼��Ա��Ϣ
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//����Ҫɾ����Ա������
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ����");
		return;
	}

	printf("������Ҫɾ����Ա������:>");
	scanf("%s", name);
	int pos=FindbyName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲����ڣ�\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ���\n");
}

////����ͨѶ¼��Ա��Ϣ
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ������Ա������:>");
	scanf("%s", name);
	int pos = FindbyName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲����ڣ�\n");
		return;
	}
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ��Ϣ
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//�޸�ͨѶ¼��Ա��Ϣ
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸���Ա������:>");
	scanf("%s", name);
	int pos = FindbyName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲����ڣ�\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ���\n");
	}
}

//����ͨѶ¼��Ա
void SortContact(Contact* pc)
{
	int i = 0;
	int j = 0;
	PeoInfo tmp;
	for (i = 0; i < pc -> sz; i++)
	{
		for (j = 0; j < pc->sz; j++)
		{
			if (pc->data[i].age < pc->data[j].age)
			{
				tmp = pc->data[i];
				pc->data[i] = pc->data[j];
				pc->data[j] = tmp;
			}
		}
	}
	printf("����ɹ���\n");
}