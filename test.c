#include "lib.h"
#include <stdio.h>

int main() //aboba
{

        Triangle test = {0, 0, 0};
        printf("Введите стороны стреугольника в формате: 1 2 3: ");
        scanf("%d %d %d", &(test.a), &(test.b), &(test.c));
        printf("Пермиетр: %d\n", perimeter(&test));
        printf("Площадь: %d\n", area(&test));
	if (isosceles(&test) == 1)
	{
		printf("Равнобедренный\n");
	}
       	else
	{
		printf("Неравнобедренный\n");
	}
}

