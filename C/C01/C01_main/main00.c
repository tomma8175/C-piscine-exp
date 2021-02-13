#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
  int c;

  c = 0;
  printf("%d\n", c);
  ft_ft(&c);
  printf("%d\n", c);
  return (0);
}
