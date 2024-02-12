// Program to reverse a string
#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the string: ");
  scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++)
    ;
  for (int j = 0; j < i; j++)
  {
    rev_str[i - j - 1] = str[j];
  }
  rev_str[i] = '\0';
}
void output(char *a, char *reverse_a)
{
  printf("The original string: %s\n", a);
  printf("Reversed string: %s", reverse_a);
}
int main()
{
  char str[100], rev_str[100];
  input_string(str);
  str_reverse(str, rev_str);
  output(str, rev_str);
  return 0;
}