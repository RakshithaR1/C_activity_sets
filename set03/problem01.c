// Program to find the distance betweeen 2 points
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the values of x1 and y1 ");
  scanf("%f %f", x1, y1);
  printf("Enter the values of x2 and y2 ");
  scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float x, y;
  x = (x2 - x1) * (x2 - x1);
  y = (y2 - y1) * (y2 - y1);
  return sqrt(x + y);
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance betweeen the point (%f, %f) and (%f, %f) is %f", x1, y1, x2, y2, distance);
}
int main()
{
  float x1, y1, x2, y2, distance;
  input(&x1, &y1, &x2, &y2);
  distance = find_distance(x1, y1, x2, y2);
  output(x1, y1, x2, y2, distance);
  return 0;
}