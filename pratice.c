#include<stdio.h>
void main() {
	struct student {	//����ṹ������
		char Name[8];
		int Middle, Final;
		float Ave;
	};
	struct student stA = { "Alice", 80 , 100 }; //��Ӷ��巨�ṹ�����
	stA.Ave = (stA.Middle + stA.Final) / 2;
	printf("%s: %d %d %.2f", stA.Name, stA.Middle, stA.Final, stA.Ave);
	getch();
}