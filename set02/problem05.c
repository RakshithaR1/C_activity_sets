//Program to find GCD of two numbers
#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a,int b)
{
  int temp;
  while(b!=0)
  {
    temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
void output(int a,int b,int gcd)
{
  printf("The GCD of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}