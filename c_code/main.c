#include <stdio.h>
#include "func.h"

int main()
{
	Lab laba = choise_lab();
	if (laba.sub == NONE){return 0;}
	printf("%d %d %d\n", laba.number, laba.option, laba.sub);
	return 0;
}
