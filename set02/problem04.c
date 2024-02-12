//program to find the sum of the composite number in an array of different numbers entered by the user
#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the array: ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>2)
    {
      for(int j=2;a[i]/2>=j;j++)
      {
        if(a[i]%j==0)
        {
          sum+=a[i];
          break;
        }
      }
    }
  }
  return sum;
}
void output(int sum)
{
  printf("The sum of the composite numbers are %d",sum);
}
int main()
{
  int n,result,a[100];
  n=input_array_size();
  input_array(n,a);
  result=sum_composite_numbers(n,a);
  output(result);
  return 0;
}