#include <stdio.h>
#include <stdlib.h>
#include "func.h"

Lab choise_lab()
{
	Lab laba = LAB_INIT;
	printf("Введите через пробел номер лабораторной работы и номер варианта\n");

	one_more_time: scan_choise(&laba);
	if (laba.number > NUM || laba.option > OPT)
	{
		laba = LAB_INIT;
		printf("Недопустимые значения\n");
		goto one_more_time;
	}

	if (laba.number > 0)
	{
		if (laba.number <= SUB1)
			{laba.sub = ONE;}
		else if (laba.number <= SUB2)
			{laba.sub = TWO;}
		else if (laba.number <= SUB3)
			{laba.sub = THREE;}
		else if (laba.number <= SUB4)
			{laba.sub = FOUR;}
	}

	return laba;
}


void scan_choise(Lab* laba)
{
	while (scanf("%d %d", &laba->number, &laba->option) != 2)
	{
		if (getchar() == 'q')
		{
			break;	
		}
		while (getchar() != '\n'){};
		printf("Введите корректно\n");
	}
}
