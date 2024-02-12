// Program to find the smallest area in n given triangles
#include <stdio.h>
typedef struct _triangle
{
  float base, altitude, area;
} triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangles: ");
  scanf("%d", &n);
  return n;
}
triangle input_triangle()
{
  triangle t;
  printf("Enter the base of the triangle: ");
  scanf("%f", &t.base);
  printf("Enter the altitude of the triangle: ");
  scanf("%f", &t.altitude);
  return t;
}
void input_n_triangles(int n, triangle t[n])
{
  for (int i = 0; i < n; i++)
  {
    printf("No. %d triangle:\n ", i + 1);
    t[i] = input_triangle();
  }
}
void find_area(triangle *t)
{
  t->area = 0;
  t->area = 0.5 * t->base * t->altitude;
}
void find_n_areas(int n, triangle t[n])
{
  for (int i = 0; i < n; i++)
  {
    find_area(&t[i]);
  }
}
triangle find_smallest_triangle(int n, triangle t[n])
{
  triangle smallest = t[0];
  for (int i = 0; i < n; i++)
  {
    if (t[i].area < smallest.area)
    {
      smallest = t[i];
    }
  }
  return smallest;
}
void output(int n, triangle t[n], triangle smallest)
{
  printf("The smallest triangle out of triangles with base and height ");
  for (int i = 0; i < n; i++)
  {
    printf("(%.2f,%.2f) ", t[i].base, t[i].altitude);
    if (i < n - 1)
    {
      printf(", ");
    }
  }
  printf(" is the triangle having base %.2f, height %.2f and area %.2f", smallest.base, smallest.altitude, smallest.area);
}
int main()
{
  triangle t[100], small;
  int n;
  n = input_n();
  input_n_triangles(n, t);
  find_n_areas(n, t);
  small = find_smallest_triangle(n, t);
  output(n, t, small);
  return 0;
}