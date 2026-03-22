#include "lib.h"
#include <stdio.h>

int main()
{
	Triangle testT = {3, 4, 5};
	printf("Периметр треугольника: %d\n", perimeterTriangle(&testT));
	printf("Площадь треугольника: %d\n", areaTriangle(&testT));
	printf("Треугольник равносторонний: %d\n", isosceles(&testT));

	Rectangle testR = {5,7};
	printf("Периметр прямоугольника: %d\n", perimeterRectangle(&testR));
	printf("Площадь прямоугольника: %d\n", areaRectangle(&testR));
	printf("Диагональ прямоугольника: %f", diagonal(&testR));
}
