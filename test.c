#include "lib.h"
#include <stdio.h>

int main()
{

        Triangle test = {0, 0, 0};
        printf("Введите стороны стреугольника в формате: 1 2 3: ");
        scanf("%d %d %d", &(test.a), &(test.b), &(test.c));
        printf("Пермиетр: %d\n", perimeter(&test));
        printf("Площадь: %d\n", area(&test));
	if (isosceles(&test) == 0)
	{
		printf("Равнобедренный\n");
	}
       	else
	{
		printf("Неравнобедренный\n");
	}
}

