#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//����ͨѶ¼���ɴ��1000���˵���Ϣ������������ ���� �Ա� �绰 ��ַ
//Ҫ��1.������ͨѶ¼��Ա
//      2.��ɾ��ͨѶ¼��Ա
//      3.���޸�ͨѶ¼��Ա��Ϣ
//      4.�ɲ�ѯͨѶ¼��Ա
//      5.������
//      6.���˳�


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
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
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
			printf("�������˳���\n");
			break;
		default:
			printf("error!\n");
			break;
		}
	} while (input);
	return 0;
}