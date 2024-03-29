#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//初始化通讯录
void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset 内存设置
	memset(pc->data, 0, sizeof(pc->data));
}

//通讯录增加人员
void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加");
		return;
	}
	
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功！\n");
}

//打印通讯录人员信息
void PrintContact(Contact* pc)
{
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名","年龄","性别", "电话","地址");
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

//查找通讯录人员信息
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

//删除通讯录人员信息
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//查找要删除人员的名字
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除！");
		return;
	}

	printf("请输入要删除人员的名字:>");
	scanf("%s", name);
	int pos=FindbyName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在！\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("删除成功！\n");
}

////查找通讯录人员信息
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人员的名字:>");
	scanf("%s", name);
	int pos = FindbyName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在！\n");
		return;
	}
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	//打印信息
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//修改通讯录人员信息
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人员的名字:>");
	scanf("%s", name);
	int pos = FindbyName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在！\n");
		return;
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功！\n");
	}
}

//排序通讯录人员
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
	printf("排序成功！\n");
}