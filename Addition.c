#include <stdio.h>
int main()
{
  int a, b, sum;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &a, &b);

  sum = a + b;

  printf("Sum of the numbers = %d\n", sum);

  return 0;
}
