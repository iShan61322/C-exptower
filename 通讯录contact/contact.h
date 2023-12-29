#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000
//类型的定义
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
	PeoInfo data[MAX];//存储通讯录人员信息
	int sz;//记录通讯录人员个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//通讯录增加人员
void AddContact(Contact *pc);

//打印通讯录人员信息
void PrintContact(const  Contact* pc);

//删除通讯录人员信息
void DelContact(Contact* pc);

//查找通讯录人员信息
void SearchContact(Contact* pc);

//修改通讯录人员信息
void ModifyContact(Contact* pc);

//排序通讯录人员
void SortContact(Contact* pc);