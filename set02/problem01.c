// Program to find the area of a triangle
#include <stdio.h>
void input(float *base, float *height)
{
  printf("Enter the base of the triangle: ");
  scanf("%f", base);
  printf("Enter the height of the triangle: ");
  scanf("%f", height);
}
void find_area(float base, float height, float *area)
{
  *area = 0.5 * base * height;
}
void output(float base, float height, float area)
{
  printf("The area of the triangle with base %f and height %f is %f", base, height, area);
}
int main()
{
  float b, h, a;
  input(&b, &h);
  find_area(b, h, &a);
  output(b, h, a);
  return 0;
}