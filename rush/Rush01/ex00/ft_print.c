void	ft_print(array, size)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = array / 1000;
	b = array / 100 % 10;
	c = array / 10 % 10;
	d = array % 10;

	ft_putchar(array / 1000 + '0');
	ft_putchar(array / 100 % 10 + '0');
	ft_putchar(array / 10 % 10);
	ft_putchar(array % 10);
	ft_putchar("\n");
}
