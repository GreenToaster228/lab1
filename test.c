#include "lib.h"
#include <stdio.h>

int main()
{
	Triangle test = {3, 4, 5};
	printf("Пермиетр: %d\n", perimeter(&test));
	printf("Площадь: %d\n", area(&test));
	printf("Равностороннесть: %d", isosceles(&test));
}
