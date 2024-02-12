//Add two numbers using pass by value
#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  return n;
}
int add(int a,int b)
{
  return a+b;
}
void output(int a,int  b, int sum)
{
  printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}