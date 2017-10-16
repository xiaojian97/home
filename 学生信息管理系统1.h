#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int menu_select()                            
{
	char c;
	do
	{
	system("cls");
	printf("\t\t    ╭════■═══════════════════════════■════╮\n");
	printf("\t\t    │         学生信息管理系统           │\n");
	printf("\t\t    ╰════■═══════════════════════════■════╯\n");
	printf("\t\t┌────────────────────────────────────────────┐\n");
	printf("\t\t│1、添加记录     2、显示记录    3、信息查询  │\n");
	printf("\t\t│                                            │\n");
	printf("\t\t│4、数据计算     5、修改记录    6、删除记录  │\n");
	printf("\t\t│                                            │\n");
	printf("\t\t│                0、退出系统                 │\n");
	printf("\t\t└────────────────────────────────────────────┘\n");
	printf("\t\t请您选择(0-6):"); 
	c=getchar();
    } while(c<'0'||c>'6');
return(c-'0');
}
int main()
{
	menu_select();
}

