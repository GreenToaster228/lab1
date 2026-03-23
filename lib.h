#include <math.h>
#include <stdio.h>

typedef struct
{
	const int a;
	const int b;
} Rectangle;

int perimeterRectangle(const Rectangle *rectangle)
{
	if(rectangle -> a<0 || rectangle -> b<0)
	{
		printf("Ошибка: отрицательные числа.\n");
		return 0;
	}
	else
		return (rectangle -> a + rectangle -> b)*2;
}

int areaRectangle(const Rectangle *rectangle)
{
	if(rectangle -> a<0 || rectangle -> b<0)
	{
		return 0;
	}
	else
		return rectangle -> a * rectangle -> b;
}

double diagonal(const Rectangle *rectangle)
{
	if(rectangle -> a<0 || rectangle -> b<0)
	{
		return 0;
	}
	else
		return (sqrt(pow(rectangle -> a,2) + pow(rectangle -> b,2)));
}
