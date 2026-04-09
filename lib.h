#include <math.h>
#define pi 3.141592653f
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
// new commentary
struct circle
{
    float length;
    float area;
    float radius;
};

float rad_sector_area(struct circle c, float radian_angle)
{
    if(radian_angle<0)
        radian_angle = -radian_angle;
    return radian_angle*c.radius*c.radius/(2.0f);
}
float deg_sector_area(struct circle c, float degree_angle)
{
    if(degree_angle<0)
        degree_angle = -degree_angle;
    return degree_angle*c.radius*c.radius*pi/360.0f;
}

struct circle new_circle(float r)
{
    struct circle c;
    if(r<0)
        r = -r;
    c.radius = r;
    c.length = 2.0f*pi*r;
    c.area = pi*r*r;
    return c;
}
