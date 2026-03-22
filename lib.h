#include <math.h>
#define pi 3.141592653f
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
