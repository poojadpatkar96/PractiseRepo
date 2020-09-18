#include <stdio.h>
int main()
{
  int x1, y, sub;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &x1, &y);

  sub = x1 - y;

  printf("Sum of the numbers = %d\n", sub);

  return 0;
}
