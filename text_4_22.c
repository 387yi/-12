#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game() {
	int ps;
	ps = rand() % 100 - 1;
	printf("%d", ps);
	int as;
	while (1)
	{
		printf("������:>\n");
		scanf("%d\n", &as);
		if (ps< as)
			printf("�´���\n");
		else if(ps > as)
			printf("��С��\n");
		else {
			printf("�¶���\n");
			break;
		}
	}
}
	
int main()
{
	int ka = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("########################\n###1.����    2.����  ###\n########################\n��ѡ��");
			
		scanf("%d", &ka);
		switch (ka)
		{
		case 1:
			game();
			break;
		case 2:
			printf("������Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
		if (ka == 2) {
			break;
		}
	} while (ka);
	return 0;
}