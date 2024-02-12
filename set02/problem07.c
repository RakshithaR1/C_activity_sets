//program to find the area of a triangle
#include<stdio.h>
typedef struct _triangle{
  float base,altitude,area;
}triangle;
triangle input_triangle()
{
 triangle t;
 printf("Enter the base of the triangle: ");
 scanf("%f",&t.base);
 printf("Enter the altitude(height) of the triangle: ");
 scanf("%f",&t.altitude);
 return t; 
}
void find_area(triangle *t)
{
  t->area=0;
  t->area=0.5*t->base*t->altitude;
}
void output(triangle t)
{
  printf("The area of triangle with base = %f and altitude = %f is %f",t.base,t.altitude,t.area);
}
int main()
{
 triangle t;
 t=input_triangle();
 find_area(&t);
 output(t);
 return 0;
}