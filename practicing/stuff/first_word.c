#include <unistd.h>

void	print_first_word(char *str)
{
	int		index;
	int		offset;
	char	*word;

	index = 0;
	word = str;
	while (str[index] == ' ' || str[index] == '\t')
		index++;
	offset = index;
	while (true)
	{
		if (str[index] == '\0')
			break ;
		if (is_space(str[index]))
			break ;
		index++;
	}
	if (word != 0)
		write(1, word + offset, index - offset);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_first_word(argv[1]);
	write(1, "\n", 1);
}
