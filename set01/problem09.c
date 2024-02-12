// program to find the square root of a number
#include <stdio.h>
#include <math.h>
float input()
{
  float n;
  printf("Enter number: ");
  scanf("%f", &n);
  return n;
}
float square_root(float n)
{
  float guess = n;
  float previous_guess;
  float epsilon = 0.00001;
  while (fabs(guess - previous_guess) > epsilon)
  {
    previous_guess = guess;
    guess = (guess + (n / guess)) / 2;
  }
  return guess;
}
void output(float n, float sqrroot)
{
  printf("Square root of %.1f is %.1f", n, sqrroot);
}
int main()
{
  float n, result;
  n = input();
  result = square_root(n);
  output(n, result);
  return 0;
}