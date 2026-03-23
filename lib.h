#include <math.h>

typedef struct
{
	const int a;
	const int b;
	const int c;
} Triangle;

int perimeterTriangle(const Triangle *triangle)
{
	return triangle -> a + triangle -> b + triangle ->c;
}

int areaTriangle(const Triangle *triangle)
{
	int p = perimeterTriangle(triangle)/2;
	return sqrt(p * (p - triangle -> a) * (p - triangle -> b) * (p - triangle -> c));
}

char isosceles(const Triangle *triangle)
{
	return (triangle -> a == triangle -> b || triangle -> a == triangle -> c || triangle -> b == triangle -> c);
}

typedef struct
{
	const int a;
	const int b;
} Rectangle;

int perimeterRectangle(const Rectangle *rectangle)
{
	if(a<0 || b<0)
	{
		return 0;
		printf("Ошибка: отрицательные числа.");
	}
	else
		return (rectangle -> a + rectangle -> b)*2;
}

int areaRectangle(const Rectangle *rectangle)
{
	if(a<0 || b<0)
	{
		return 0;
		printf("Ошибка: отрицательные числа.");
	}
	else
		return rectangle -> a * rectangle -> b;
}

double diagonal(const Rectangle *rectangle)
{
	if(a<0 || b<0)
	{
		return 0;
		printf("Ошибка: отрицательные числа.");
	}
	else
		return (sqrt(pow(rectangle -> a,2) + pow(rectangle -> b,2)));
}
