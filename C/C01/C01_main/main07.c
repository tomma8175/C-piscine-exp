#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

 	i = 0;
	while (i < size/2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size -i -1] = tmp;
		i++;
	}
}

int		main()
{
  int tab[8] = {88,33,53,15,30,10,1,11};
  int size = 8;

  ft_rev_int_tab(tab,size);

  for( int k = 0; k < size; k++)
  {
    fprintf(stdout,"%d\n",tab[k]);
  } 
}
