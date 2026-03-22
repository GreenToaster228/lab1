#include <math.h>

typedef struct
{
	const int a;
	const int b;
	const int c;
} Triangle;

int perimeter(const Triangle *triangle)
{
	return triangle -> a + triangle -> b + triangle ->c;
}

int area(const Triangle *triangle)
{
	int p = perimeter(triangle)/2;
	return sqrt(p * (p - triangle -> a) * (p - triangle -> b) * (p - triangle -> c));
}

char isosceles(const Triangle *triangle)
{
	return (triangle -> a == triangle -> b || triangle -> a == triangle -> c || triangle -> b == triangle -> c);
}
