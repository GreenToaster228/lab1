#include "lib.h"
#include <stdio.h>

int main()
{
    Rectangle testR = {0, 0};
    printf("Введите стороны прямоугольника в формате: 1 2: ");
    scanf("%d %d %d", &(test.a), &(test.b));
    printf("Периметр: %d\n", perimeterRectangle(&testR));
    printf("Площадь: %d\n", areaRectangel(&testR));
    printf("Диагональ: %d", diagonal(&testR));
}
