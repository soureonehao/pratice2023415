#include<stdio.h>
void main() {
	struct student {	//定义结构体类型
		char Name[8];
		int Middle, Final;
		float Ave;
	};
	struct student stA = { "Alice", 80 , 100 }; //间接定义法结构体变量
	stA.Ave = (stA.Middle + stA.Final) / 2;
	printf("%s: %d %d %.2f", stA.Name, stA.Middle, stA.Final, stA.Ave);
	getch();
}