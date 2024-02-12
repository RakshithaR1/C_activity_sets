//Program to add n complex numbers
#include<stdio.h>
struct _complex{
  float real,imaginary;
};
typedef struct _complex complex;
int get_n()
{
  int n;
  printf("Enter the number of arrays: ");
  scanf("%d",&n);
  return n;
}
complex input_complex()
{
  complex c;
  printf("Enter the real and imaginary part of the number: ");
  scanf("%f %f",c.real,c.imaginary);
  return c;
}
void input_n_complex(int n,complex c[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter the no.%d complex number: ",i+1);
    c[i]=input_complex();
  }
}
complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
complex add_n_complex(int n,complex c[n])
{
  complex sum={0,0};
  for(int i=0;i<n;i++)
  {
    sum=add(sum,c[i]);
  }
  return sum;
}
void output(int n,complex c[n],complex result)
{
  for(int i=0;i<n;i++)
  {
    printf("%.1f+%.1fi",c[i].real,c[i].imaginary);
    if(i<n-1)
    {
      printf(" + ");
    }
  }
  printf("%.1f+%.1fi",result.real,result.imaginary);
}
int main()
{
  complex c[100],result;
  int n;
  n=get_n();
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}