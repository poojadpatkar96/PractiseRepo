#include <stdio.h>
int main()
{
  int x, y, sub;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &x, &y);

  sub = x - y;

  printf("Sum of the numbers = %d\n", sub);

  return 0;
}
