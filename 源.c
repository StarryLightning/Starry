#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define maxmembernumber 20
#define maxbooknumber 20

struct members//定义会员结构体
{
	int number;
	char name[100];
	int point;
};
struct members memberdata[maxmembernumber] = { { 1, "博丽灵梦", 100 }, { 2, "雾雨魔理沙", 100 }, { 3, "魂魄妖梦", 100 }, { 4, "米斯蒂娅·萝蕾拉", 100 }, { 5, "蓬莱山辉夜", 90 }, { 6, "爱丽丝", 90 }, { 7, "琪露诺", 90 }, { 8, "红美铃", 90 }, { 9, "蕾米莉亚", 90 }, { 10, "八意永琳", 90 } };
int size = 10;//初始会员数量

struct books//定义书籍结构体
{
	int number;
	char name[100];
	int money;
};
struct books bookdata[maxbooknumber] = { { 1, "苏海老师自传", 88 }, { 2, "苏海的成功法则", 98 }, { 3, "c语言从入门到入土", 55 }, { 4, "格局", 60 }, { 5, "苏海娜娜米", 55 }, { 6, "如何一个月练出腹肌", 99 }, { 7, "嗦尼：摄影入门", 26000 }, { 8, "南海交通图", 5 } };
int booksize = 8;//初始书籍数量

void start();//初始函数

void menu();//主菜单函数

void membermanage();//会员管理函数
void showmeminfo();//显示会员信息函数
void addmeminfo();//增加会员信息函数
void modifymeminfo();//修改会员信息函数

void bookmanage();//书籍管理函数
void showbookinfo();//显示书籍信息函数
void addbookinfo();//增加书籍信息函数
void delbookinfo();//删除书籍信息函数

void shopsettle();//购物结算函数

int main()
{
	start();
	return 0;
}

void start()//初始函数
{
	int startnumber = 0;
	printf("******************************\n");
	printf("*      图书销售管理系统      *\n");
	printf("*      1.登录系统     *\n");
	printf("*      2.退出         *\n");
	printf("******************************\n");
	printf("请选择，输入数字（1-2）：");
	while (startnumber<1 || startnumber>2)//若输入的数字不在范围内则重新输入
	{
		scanf("%d", &startnumber);
	}
	if (startnumber == 2)
	{
		printf("欢迎再次使用本系统！\n");
		exit(0);
	}
	if (startnumber == 1)
	{
		int i = 0;
		char account[100] = { 0 };//账号
		char password[100] = { 0 };//密码
		printf("登录：\n");//账号为admin，密码为123456，账号或者密码有误皆不可登录，一共有三次机会
		for (i = 0; i < 3; i++)
		{
			printf("请输入账号：");
			scanf("%s", account);
			printf("请输入密码：");
			scanf("%s", password);
			if ((strcmp(password, "123456") == 0)&&(strcmp(account,"admin")==0))
			{
				menu();//登录成功，进入主菜单函数
				break;
			}
			else if (!((strcmp(password, "123456") == 0) && (strcmp(account, "admin") == 0)) && (i == 0))
			{
				printf("用户名或密码有误，您还有2次机会\n");
			}
			else if (!((strcmp(password, "123456") == 0) && (strcmp(account, "admin") == 0)) && (i == 1))
			{
				printf("用户名或密码有误，您还有1次机会\n");
			}
			else if (!((strcmp(password, "123456") == 0) && (strcmp(account, "admin") == 0)) && (i == 2))
			{
				printf("连续三次输入错误。系统退出！\n");
				exit(0);
			}
		}
	}
}

void menu()//主菜单函数
{
	int menunumber = 0;
	printf("登录成功！\n");
	printf("******************************\n");
	printf("*      图书销售管理系统      *\n");
	printf("*         1.会员管理         *\n");
	printf("*         2.书籍管理         *\n");
	printf("*         3.购物结算         *\n");
	printf("*         4.注销             *\n");
	printf("******************************\n");
	printf("请选择，输入数字（1-4）：");
	while (menunumber<1 || menunumber>4)//若输入的数字不在范围内则重新输入
	{
		scanf("%d", &menunumber);
	}
	if (menunumber == 1)
	{
		membermanage();//进入会员管理函数
	}
	else if (menunumber == 2)
	{
		bookmanage();//进入书籍管理函数
	}
	else if (menunumber == 3)
	{
		shopsettle();//进入购物结算函数
	}
	else
	{
		start();//注销返回初始函数
	}
}

void membermanage()//会员管理函数
{
	int membermanagenumber = 0;
	printf("图书销售管理系统 > 会员管理\n");
	printf("**************************\n");
	printf("*  1.显示会员信息        *\n");
	printf("*  2.添加会员信息        *\n");
	printf("*  3.修改会员信息        *\n");
	printf("*  4.返回主菜单          *\n");
	printf("**************************\n");
	printf("请选择，输入数字（1-4）：");
	while (membermanagenumber<1 || membermanagenumber>4)//若输入的数字不在范围内则重新输入
	{
		scanf("%d", &membermanagenumber);
	}
	if (membermanagenumber == 1)
	{
		showmeminfo();//显示会员信息函数
	}
	else if (membermanagenumber == 2)
	{
		addmeminfo();//增加会员信息函数
	}
	else if (membermanagenumber == 3)
	{
		modifymeminfo();//修改会员信息函数
	}
	else
	{
		menu();//返回主菜单
	}
}

void showmeminfo()//显示会员信息
{
	printf("图书销售管理系统 > 会员信息管理 > 显示会员信息\n");
	printf("会员号		姓名			积分\n");
	for (int i = 0; i < size; i++)//size为初始会员数量
	{
		printf("%-10d	%-16s	%-16d\n", memberdata[i].number, memberdata[i].name, memberdata[i].point);
	}
	printf("会员信息如上，返回上一页面\n");
	membermanage();
}

void addmeminfo()//增加会员信息
{
	printf("图书销售管理系统 > 会员信息管理 > 添加会员信息\n");
	printf("请输入新会员姓名：");
	scanf("%s", &memberdata[size].name);
	printf("请输入新会员积分：");
	scanf("%d", &memberdata[size].point);
	memberdata[size].number = size + 1;//增加会员编号
	size++;//增加会员数量
	printf("添加成功！\n");
	membermanage();
}

void modifymeminfo()//修改会员信息
{
	int modifynumber;
	char modifyname[50];
	int modifypoint;
	printf("图书销售管理系统 > 会员信息管理 > 修改会员信息\n");
	printf("请输入要修改的会员号：");
	scanf("%d", &modifynumber);
	printf("请输入要修改的会员姓名：");
	scanf("%s", &modifyname);
	printf("请输入要修改的会员积分：");
	scanf("%d", &modifypoint);
	strcpy(memberdata[modifynumber - 1].name, modifyname);//修改姓名
	memberdata[modifynumber-1].point = modifypoint;//修改积分
	printf("修改成功！\n");
	membermanage();
}

void bookmanage()//书籍管理函数
{
	int bookmmanagenumber = 0;
	printf("图书销售管理系统 > 书籍管理\n");
	printf("****************\n");
	printf("* 1.查看书目   *\n");
	printf("* 2.添加书籍   *\n");
	printf("* 3.删除书籍   *\n");
	printf("* 4.返回主菜单 *\n");
	printf("****************\n");
	printf("请选择，输入数字（1-4）：");
	while (bookmmanagenumber<1 || bookmmanagenumber>4)//若输入的数字不在范围内则重新输入
	{
		scanf("%d", &bookmmanagenumber);
	}
	if (bookmmanagenumber == 1)
	{
		showbookinfo();//显示书籍信息
	}
	else if (bookmmanagenumber == 2)
	{
		addbookinfo();//增加书籍信息
	}
	else if (bookmmanagenumber == 3)
	{
		delbookinfo();//删除书籍信息
	}
	else
	{
		menu();//返回主菜单
	}
}

void showbookinfo()//显示书籍信息
{
	printf("图书销售管理系统 > 书籍管理 > 书籍列表\n");
	printf("图书号		图书名			图书价钱\n");
	for (int i = 0; i < booksize; i++)//booksize为初始书籍数量
	{
		printf("%-10d	%-16s	%-16d\n", bookdata[i].number, bookdata[i].name, bookdata[i].money);
	}
	printf("书籍信息如上\n");
}

void addbookinfo()//增加书籍信息
{
	printf("图书销售管理系统 > 书籍管理 > 添加书籍\n");
	printf("请输入图书名：");
	scanf("%s", &bookdata[booksize].name);
	printf("请输入图书价钱：");
	scanf("%d", &bookdata[booksize].money);
	bookdata[booksize].number = booksize + 1;//增加书籍编号
	booksize++;//增加书籍数量
	printf("添加成功！\n");
	bookmanage();
}

void delbookinfo()//删除书籍信息
{
	char delbook[50];
	int flag;//标志变量用于储存要寻找的书籍名的下标
	int flag1=0;//标志变量用于判断书籍是否存在
	printf("图书销售管理系统 > 书籍管理 > 书籍下架\n");
	printf("请输入要下架的图书名：");
	scanf("%s", &delbook);
	for (int i = 0; i < booksize; i++)
	{
		if (strcmp(bookdata[i].name, delbook) == 0)
		{
			printf("找到该图书，位置为：%d\n", i + 1);
			flag = i + 1;//找到下标
			flag1 = 0;
			break;
		}
		flag1 = 1;
	}
	if (flag1 == 1)
	{
		printf("该图书不存在！返回上一页面\n");
		bookmanage();
	}
	for (int j = flag-1; j < booksize; j++)//从找到的下标开始，将之后数组的元素前移
	{
		strcpy(bookdata[j].name, bookdata[j + 1].name);
		bookdata[j].money = bookdata[j + 1].money;
	}
	booksize--;//减少书籍数量
	printf("删除成功！\n");
	bookmanage();
}

void shopsettle()//购物结算函数
{
	int membernumber;//会员号
	int booknumber;//书籍号
	int quantity;//购买数量
	long sum;//总价
	char flag = 0;
	printf("图书销售管理系统 > 购物结算\n");
	showbookinfo();
	printf("请输入会员号：");
	scanf("%d", &membernumber);
	printf("请输入要购买的书籍编号：");
	scanf("%d", &booknumber);
	printf("请输入要购买的数量：");
	scanf("%d", &quantity);
	sum = quantity*bookdata[booknumber - 1].money;
	printf("您购买的书籍名称为%s，数量为%d，总额为%ld\n", bookdata[booknumber - 1].name, quantity, sum);
	printf("是否确认？(是 Y/否 N）\n");
	while (!(flag == 'N' || flag == 'n'))//只要不是否则就可以继续购买
	{
		scanf("%c", &flag);
		if (flag == 'Y' || flag == 'y')
		{

			if (sum>memberdata[membernumber - 1].point)//若会员积分不足则无法购买
			{
				printf("会员积分不足，无法购买，返回上一页面\n");
				shopsettle();
			}
			else//成功购买后扣除积分，并可选择是否继续购买
			{
				printf("购买成功！\n");
				memberdata[membernumber - 1].point = memberdata[membernumber - 1].point - sum;
				shopsettle();
			}
		}
	}
	printf("退出购买，返回主菜单\n");
	menu();//不继续购买，则返回主菜单
}