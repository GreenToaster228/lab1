#define pi 3.141592653f


struct circle
{
    float length;
    float area;
    float radius;
};

float rad_sector_area(struct circle c, float radian_angle)
{
    return radian_angle*c.radius*c.radius/(2.0f);
}
float deg_sector_area(struct circle c, float degree_angle)
{
    return degree_angle*c.radius*c.radius*pi/360.0f;
}

struct circle new_circle(float r)
{
    struct circle c;
    c.radius = r;
    c.length = 2.0f*pi*r;
    c.area = pi*r*r;
    return c;
}
