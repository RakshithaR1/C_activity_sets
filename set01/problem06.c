// Compare three numbers using pass by reference
#include <stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Enter the three numbers a,b and c: ");
  scanf("%d %d %d", a, b, c);
}
void compare(int a, int b, int c, int *largest)
{
  if (a >= b && a >= c)
  {
    *largest = a;
  }
  else if (b >= c)
  {
    *largest = b;
  }
  else
  {
    *largest = c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("The largest of three numbers %d,%d and %d is %d", a, b, c, largest);
}
int main()
{
  int a, b, c, large;
  input(&a, &b, &c);
  compare(a, b, c, &large);
  output(a, b, c, large);
  return 0;
}