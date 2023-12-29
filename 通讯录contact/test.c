#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//创建通讯录：可存放1000个人的信息，包括：姓名 年龄 性别 电话 地址
//要求：1.可增加通讯录人员
//      2.可删除通讯录人员
//      3.可修改通讯录人员信息
//      4.可查询通讯录人员
//      5.可排序
//      6.可退出


void menu()
{
	printf("****************************************\n");
	printf("******   1.add       2.del      ********\n");
	printf("******   3.search    4.modify   ********\n");
	printf("******   5.sort      6.print    ********\n");
	printf("******         0.exit           ********\n");
	printf("****************************************\n");

}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("Input>: ");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("程序已退出！\n");
			break;
		default:
			printf("error!\n");
			break;
		}
	} while (input);
	return 0;
}