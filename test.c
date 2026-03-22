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
	printf("введите радиус окружности");
	float r;
	scanf("%f", &r);
	struct circle c = new_circle(r);
	printf("\nдлина окружности: %f\n ",c.length);
	printf("\nплощадь окружности: %f\n ",c.area);

	printf("введите углы в формате: 'радиальный градусы': ");
	float rad;
	float deg;
	scanf("%f %f",&rad, &deg);
	printf("\nрадиальная - %f, градусная - %f", rad_sector_area(c, rad), deg_sector_area(c,deg));
}

