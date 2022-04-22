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
		printf("请输入:>\n");
		scanf("%d\n", &as);
		if (ps< as)
			printf("猜大了\n");
		else if(ps > as)
			printf("猜小了\n");
		else {
			printf("猜对了\n");
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
		printf("########################\n###1.继续    2.结束  ###\n########################\n请选择》");
			
		scanf("%d", &ka);
		switch (ka)
		{
		case 1:
			game();
			break;
		case 2:
			printf("结束游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
		if (ka == 2) {
			break;
		}
	} while (ka);
	return 0;
}