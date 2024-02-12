//Program to find whether the number is composite number
#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number to be checked: ");
  scanf("%d",&n);
  return n;
  }
int is_composite(int n)
{
  if(n>2)
  {
    for(int i=2;n/2>=i;i++)
    {
      if(n%i==0)
      {
        return 0;
      }
    }
  }
  return 1;
}
void output(int n,int result)
{
  if(result==0)
  {
    printf("%d is a composite number",n);
  }else{
    printf("%d is not a composite number",n);
  }
}
int main()
{
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}