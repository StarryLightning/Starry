#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define maxmembernumber 20
#define maxbooknumber 20

struct members//�����Ա�ṹ��
{
	int number;
	char name[100];
	int point;
};
struct members memberdata[maxmembernumber] = { { 1, "��������", 100 }, { 2, "����ħ��ɳ", 100 }, { 3, "��������", 100 }, { 4, "��˹��櫡�������", 100 }, { 5, "����ɽ��ҹ", 90 }, { 6, "����˿", 90 }, { 7, "��¶ŵ", 90 }, { 8, "������", 90 }, { 9, "��������", 90 }, { 10, "��������", 90 } };
int size = 10;//��ʼ��Ա����

struct books//�����鼮�ṹ��
{
	int number;
	char name[100];
	int money;
};
struct books bookdata[maxbooknumber] = { { 1, "�պ���ʦ�Դ�", 88 }, { 2, "�պ��ĳɹ�����", 98 }, { 3, "c���Դ����ŵ�����", 55 }, { 4, "���", 60 }, { 5, "�պ�������", 55 }, { 6, "���һ������������", 99 }, { 7, "���᣺��Ӱ����", 26000 }, { 8, "�Ϻ���ͨͼ", 5 } };
int booksize = 8;//��ʼ�鼮����

void start();//��ʼ����

void menu();//���˵�����

void membermanage();//��Ա������
void showmeminfo();//��ʾ��Ա��Ϣ����
void addmeminfo();//���ӻ�Ա��Ϣ����
void modifymeminfo();//�޸Ļ�Ա��Ϣ����

void bookmanage();//�鼮������
void showbookinfo();//��ʾ�鼮��Ϣ����
void addbookinfo();//�����鼮��Ϣ����
void delbookinfo();//ɾ���鼮��Ϣ����

void shopsettle();//������㺯��

int main()
{
	start();
	return 0;
}

void start()//��ʼ����
{
	int startnumber = 0;
	printf("******************************\n");
	printf("*      ͼ�����۹���ϵͳ      *\n");
	printf("*      1.��¼ϵͳ     *\n");
	printf("*      2.�˳�         *\n");
	printf("******************************\n");
	printf("��ѡ���������֣�1-2����");
	while (startnumber<1 || startnumber>2)//����������ֲ��ڷ�Χ������������
	{
		scanf("%d", &startnumber);
	}
	if (startnumber == 2)
	{
		printf("��ӭ�ٴ�ʹ�ñ�ϵͳ��\n");
		exit(0);
	}
	if (startnumber == 1)
	{
		int i = 0;
		char account[100] = { 0 };//�˺�
		char password[100] = { 0 };//����
		printf("��¼��\n");//�˺�Ϊadmin������Ϊ123456���˺Ż�����������Բ��ɵ�¼��һ�������λ���
		for (i = 0; i < 3; i++)
		{
			printf("�������˺ţ�");
			scanf("%s", account);
			printf("���������룺");
			scanf("%s", password);
			if ((strcmp(password, "123456") == 0)&&(strcmp(account,"admin")==0))
			{
				menu();//��¼�ɹ����������˵�����
				break;
			}
			else if (!((strcmp(password, "123456") == 0) && (strcmp(account, "admin") == 0)) && (i == 0))
			{
				printf("�û�������������������2�λ���\n");
			}
			else if (!((strcmp(password, "123456") == 0) && (strcmp(account, "admin") == 0)) && (i == 1))
			{
				printf("�û�������������������1�λ���\n");
			}
			else if (!((strcmp(password, "123456") == 0) && (strcmp(account, "admin") == 0)) && (i == 2))
			{
				printf("���������������ϵͳ�˳���\n");
				exit(0);
			}
		}
	}
}

void menu()//���˵�����
{
	int menunumber = 0;
	printf("��¼�ɹ���\n");
	printf("******************************\n");
	printf("*      ͼ�����۹���ϵͳ      *\n");
	printf("*         1.��Ա����         *\n");
	printf("*         2.�鼮����         *\n");
	printf("*         3.�������         *\n");
	printf("*         4.ע��             *\n");
	printf("******************************\n");
	printf("��ѡ���������֣�1-4����");
	while (menunumber<1 || menunumber>4)//����������ֲ��ڷ�Χ������������
	{
		scanf("%d", &menunumber);
	}
	if (menunumber == 1)
	{
		membermanage();//�����Ա������
	}
	else if (menunumber == 2)
	{
		bookmanage();//�����鼮������
	}
	else if (menunumber == 3)
	{
		shopsettle();//���빺����㺯��
	}
	else
	{
		start();//ע�����س�ʼ����
	}
}

void membermanage()//��Ա������
{
	int membermanagenumber = 0;
	printf("ͼ�����۹���ϵͳ > ��Ա����\n");
	printf("**************************\n");
	printf("*  1.��ʾ��Ա��Ϣ        *\n");
	printf("*  2.��ӻ�Ա��Ϣ        *\n");
	printf("*  3.�޸Ļ�Ա��Ϣ        *\n");
	printf("*  4.�������˵�          *\n");
	printf("**************************\n");
	printf("��ѡ���������֣�1-4����");
	while (membermanagenumber<1 || membermanagenumber>4)//����������ֲ��ڷ�Χ������������
	{
		scanf("%d", &membermanagenumber);
	}
	if (membermanagenumber == 1)
	{
		showmeminfo();//��ʾ��Ա��Ϣ����
	}
	else if (membermanagenumber == 2)
	{
		addmeminfo();//���ӻ�Ա��Ϣ����
	}
	else if (membermanagenumber == 3)
	{
		modifymeminfo();//�޸Ļ�Ա��Ϣ����
	}
	else
	{
		menu();//�������˵�
	}
}

void showmeminfo()//��ʾ��Ա��Ϣ
{
	printf("ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > ��ʾ��Ա��Ϣ\n");
	printf("��Ա��		����			����\n");
	for (int i = 0; i < size; i++)//sizeΪ��ʼ��Ա����
	{
		printf("%-10d	%-16s	%-16d\n", memberdata[i].number, memberdata[i].name, memberdata[i].point);
	}
	printf("��Ա��Ϣ���ϣ�������һҳ��\n");
	membermanage();
}

void addmeminfo()//���ӻ�Ա��Ϣ
{
	printf("ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > ��ӻ�Ա��Ϣ\n");
	printf("�������»�Ա������");
	scanf("%s", &memberdata[size].name);
	printf("�������»�Ա���֣�");
	scanf("%d", &memberdata[size].point);
	memberdata[size].number = size + 1;//���ӻ�Ա���
	size++;//���ӻ�Ա����
	printf("��ӳɹ���\n");
	membermanage();
}

void modifymeminfo()//�޸Ļ�Ա��Ϣ
{
	int modifynumber;
	char modifyname[50];
	int modifypoint;
	printf("ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > �޸Ļ�Ա��Ϣ\n");
	printf("������Ҫ�޸ĵĻ�Ա�ţ�");
	scanf("%d", &modifynumber);
	printf("������Ҫ�޸ĵĻ�Ա������");
	scanf("%s", &modifyname);
	printf("������Ҫ�޸ĵĻ�Ա���֣�");
	scanf("%d", &modifypoint);
	strcpy(memberdata[modifynumber - 1].name, modifyname);//�޸�����
	memberdata[modifynumber-1].point = modifypoint;//�޸Ļ���
	printf("�޸ĳɹ���\n");
	membermanage();
}

void bookmanage()//�鼮������
{
	int bookmmanagenumber = 0;
	printf("ͼ�����۹���ϵͳ > �鼮����\n");
	printf("****************\n");
	printf("* 1.�鿴��Ŀ   *\n");
	printf("* 2.����鼮   *\n");
	printf("* 3.ɾ���鼮   *\n");
	printf("* 4.�������˵� *\n");
	printf("****************\n");
	printf("��ѡ���������֣�1-4����");
	while (bookmmanagenumber<1 || bookmmanagenumber>4)//����������ֲ��ڷ�Χ������������
	{
		scanf("%d", &bookmmanagenumber);
	}
	if (bookmmanagenumber == 1)
	{
		showbookinfo();//��ʾ�鼮��Ϣ
	}
	else if (bookmmanagenumber == 2)
	{
		addbookinfo();//�����鼮��Ϣ
	}
	else if (bookmmanagenumber == 3)
	{
		delbookinfo();//ɾ���鼮��Ϣ
	}
	else
	{
		menu();//�������˵�
	}
}

void showbookinfo()//��ʾ�鼮��Ϣ
{
	printf("ͼ�����۹���ϵͳ > �鼮���� > �鼮�б�\n");
	printf("ͼ���		ͼ����			ͼ���Ǯ\n");
	for (int i = 0; i < booksize; i++)//booksizeΪ��ʼ�鼮����
	{
		printf("%-10d	%-16s	%-16d\n", bookdata[i].number, bookdata[i].name, bookdata[i].money);
	}
	printf("�鼮��Ϣ����\n");
}

void addbookinfo()//�����鼮��Ϣ
{
	printf("ͼ�����۹���ϵͳ > �鼮���� > ����鼮\n");
	printf("������ͼ������");
	scanf("%s", &bookdata[booksize].name);
	printf("������ͼ���Ǯ��");
	scanf("%d", &bookdata[booksize].money);
	bookdata[booksize].number = booksize + 1;//�����鼮���
	booksize++;//�����鼮����
	printf("��ӳɹ���\n");
	bookmanage();
}

void delbookinfo()//ɾ���鼮��Ϣ
{
	char delbook[50];
	int flag;//��־�������ڴ���ҪѰ�ҵ��鼮�����±�
	int flag1=0;//��־���������ж��鼮�Ƿ����
	printf("ͼ�����۹���ϵͳ > �鼮���� > �鼮�¼�\n");
	printf("������Ҫ�¼ܵ�ͼ������");
	scanf("%s", &delbook);
	for (int i = 0; i < booksize; i++)
	{
		if (strcmp(bookdata[i].name, delbook) == 0)
		{
			printf("�ҵ���ͼ�飬λ��Ϊ��%d\n", i + 1);
			flag = i + 1;//�ҵ��±�
			flag1 = 0;
			break;
		}
		flag1 = 1;
	}
	if (flag1 == 1)
	{
		printf("��ͼ�鲻���ڣ�������һҳ��\n");
		bookmanage();
	}
	for (int j = flag-1; j < booksize; j++)//���ҵ����±꿪ʼ����֮�������Ԫ��ǰ��
	{
		strcpy(bookdata[j].name, bookdata[j + 1].name);
		bookdata[j].money = bookdata[j + 1].money;
	}
	booksize--;//�����鼮����
	printf("ɾ���ɹ���\n");
	bookmanage();
}

void shopsettle()//������㺯��
{
	int membernumber;//��Ա��
	int booknumber;//�鼮��
	int quantity;//��������
	long sum;//�ܼ�
	char flag = 0;
	printf("ͼ�����۹���ϵͳ > �������\n");
	showbookinfo();
	printf("�������Ա�ţ�");
	scanf("%d", &membernumber);
	printf("������Ҫ������鼮��ţ�");
	scanf("%d", &booknumber);
	printf("������Ҫ�����������");
	scanf("%d", &quantity);
	sum = quantity*bookdata[booknumber - 1].money;
	printf("��������鼮����Ϊ%s������Ϊ%d���ܶ�Ϊ%ld\n", bookdata[booknumber - 1].name, quantity, sum);
	printf("�Ƿ�ȷ�ϣ�(�� Y/�� N��\n");
	while (!(flag == 'N' || flag == 'n'))//ֻҪ���Ƿ���Ϳ��Լ�������
	{
		scanf("%c", &flag);
		if (flag == 'Y' || flag == 'y')
		{

			if (sum>memberdata[membernumber - 1].point)//����Ա���ֲ������޷�����
			{
				printf("��Ա���ֲ��㣬�޷����򣬷�����һҳ��\n");
				shopsettle();
			}
			else//�ɹ������۳����֣�����ѡ���Ƿ��������
			{
				printf("����ɹ���\n");
				memberdata[membernumber - 1].point = memberdata[membernumber - 1].point - sum;
				shopsettle();
			}
		}
	}
	printf("�˳����򣬷������˵�\n");
	menu();//�����������򷵻����˵�
}