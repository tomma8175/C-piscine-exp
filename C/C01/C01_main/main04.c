#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a/=*b;
  *b = temp % *b;
  
}

int  main(void)
{
  int a = 15;
  int b = 10;
  int *aptr = &a;
  int *bptr = &b;


  printf("%d\n", a);
  printf("%d\n", b);
  
  ft_ultimate_div_mod(aptr, bptr);

  printf("%d\n", a);
  printf("%d\n", b);

  return(0);

}