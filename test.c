#include "lib.h"
#include <stdio.h>

int main()
{
	printf("введите радиус окружности");
	float r;
	scanf("%f", &r);
	circle c = new_circle(r);
	printf("\nдлина окружности: %f\n ",c.length);
	printf("\nплощадь окружности: %f\n ",c.area);

	printf("введите углы в формате: 'радиальный градусы': ");
	float rad;
	float deg;
	scanf("%f %f",rad deg);
	printf("\nрадиальная - %f, градусная - %f", rad_sector_area(c, rad), deg_sector_area(c,deg));
}
