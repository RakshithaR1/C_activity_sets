// program to add two complex numbers
#include <stdio.h>
struct _complex
{
  float real;
  float imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary part of the number: ");
  scanf("%f %f", &c.real, &c.imaginary);
  return c;
}
Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.imaginary = a.imaginary + b.imaginary;
  sum.real = a.real + b.real;
  return sum;
}
void output(Complex a, Complex b, Complex sum)
{
  printf("The sum of %.2f+%.2fi and %.2f+%.2fi is %.2f+%.2fi", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
int main()
{
  Complex a, b, result;
  a = input_complex();
  b = input_complex();
  result = add_complex(a, b);
  output(a, b, result);
  return 0;
}