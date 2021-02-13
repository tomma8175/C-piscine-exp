#include <stdio.h>

void    ft_swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  
  int i = 3;
  int j = 4;
  int temp;
    
  int *iptr = &i;
  int *jptr = &j;

  ft_swap(iptr, jptr);

  printf("%d\n", i);
  printf("%d\n", j);
  
  return (0);
}
