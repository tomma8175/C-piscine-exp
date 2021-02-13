#include<stdio.h>

void ft_sort_integer_table (int * tab, int size)
{
 int team;
 int i = 1;

 while( i < size)
   {
     if( i == 0 || tab[i] >= tab[i - 1])
      {
         i++;
      }
      else 
      {
        team = tab[i];
        tab[i] = tab[i - 1];
        tab[ i - 1] = team;
        i--;
      }
      
    }
}

int main()
{
  int tab[8] = {88,33,53,15,30,10,1,11};
  int size = 8;

  ft_sort_integer_table(tab,size);

  for( int k = 0; k < size; k++)
  {
    fprintf(stdout,"%d\n",tab[k]);
  } 
}