// Compare three numbers using pass by value
#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  return n;
}
int compare(int a, int b, int c)
{
  if (a >= b && a >= c)
  {
    return a;
  }
  else if (b >= c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("The largest of %d,%d and %d is %d", a, b, c, largest);
}
int main()
{
  int a, b, c, large;
  a = input();
  b = input();
  c = input();
  large = compare(a, b, c);
  output(a, b, c, large);
  return 0;
}