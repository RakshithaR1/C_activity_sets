// program to find the sum of n different numbers entered by the users
#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Input array size: ");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("Input the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}
int sum_n_array(int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
}
void output(int n, int a[n], int sum)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d", a[i]);
    if (i < n - 1)
    {
      printf("+");
    }
  }
  printf(" is %d", sum);
}
int main()
{
  int n, a[100], result;
  n = input_array_size();
  input_array(n, a);
  result = sum_n_array(n, a);
  output(n, a, result);
  return 0;
}