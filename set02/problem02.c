// Program to find if a triangle is scalene
#include <stdio.h>
int input_side()
{
  int n;
  printf("Enter the side of the triangle: ");
  scanf("%d", &n);
  return n;
}
int check_scalene(int a, int b, int c)
{
  if (a != b && b != c && a != c)
  {
    return 1;
  }
  else
  {
    if (a == 0 || b == 0 || c == 0)
    {
      return -1;
    }
    return 0;
  }
}
void output(int a, int b, int c, int isscalene)
{
  if (isscalene > 0)
  {
    printf("The triangle with sides %d,%d and %d is a scalene triangle", a, b, c);
  }
  else if (isscalene < 0)
  {
    printf("The given sides do not form a triangle");
  }
  else
  {
    printf("The triangle with sides %d,%d and %d is not scalene", a, b, c);
  }
}
int main()
{
  int a, b, c, check;
  a = input_side();
  b = input_side();
  c = input_side();
  check = check_scalene(a, b, c);
  output(a, b, c, check);
  return 0;
}