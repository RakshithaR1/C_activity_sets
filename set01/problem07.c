// Program to find sum of all natural numbers until n
#include <stdio.h>
int input_n()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  return n;
}
int sum_n_nos(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}
void output(int n, int sum)
{
  if (n > 0)
  {
    printf("The sum of %d natural numbers is %d.", n, sum);
  }
  else
  {
    printf("The value of n is not valid.");
  }
}
int main()
{
  int n, result;
  n = input_n();
  result = sum_n_nos(n);
  output(n, result);
  return 0;
}
