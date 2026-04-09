#include <math.h>

typedef struct
{
	int a; //aboba
	int b;
	int c;
} Triangle;

char check(const Triangle *triangle)
{
	if (triangle -> a <= 0 || triangle -> b <= 0 || triangle -> c <= 0) return 0;
	return ((triangle -> a + triangle -> b > triangle -> c) &&  (triangle -> a + triangle -> c > triangle -> b) && (triangle -> c + triangle -> b > triangle -> a));
}

int perimeter(const Triangle *triangle)
{
	if (check(triangle) == 0) return 0;
	return triangle -> a + triangle -> b + triangle ->c;
}

int area(const Triangle *triangle)
{
	if (check(triangle) == 0) return 0;
	int p = perimeter(triangle)/2;
	return sqrt(p * (p - triangle -> a) * (p - triangle -> b) * (p - triangle -> c));
}

char isosceles(const Triangle *triangle)
{
	if (check(triangle) == 0) return 0;
	return (triangle -> a == triangle -> b || triangle -> a == triangle -> c || triangle -> b == triangle -> c);
}

