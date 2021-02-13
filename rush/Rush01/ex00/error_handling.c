#include <stdio.h>

bool		handle_error(int row_left[4], int row_right[4], int col_up[4], int col_down[4])
{
	int i = 0;
	int count_of_necessary_numbers_4 = 0;
	int count_of_necessary_numbers_3 = 0;
	int count_of_necessary_numbers_2 = 0;
	int count_of_necessary_numbers_1 = 0;
	while (i < 4)
	{
		switch(row_left[i])
		{
			case 4:
				count_of_necessary_numbers_4++;
				break;
			case 3:
				count_of_necessary_numbers_3++;
				break;
			case 2:
				count_of_necessary_numbers_2++;
				break;
			case 1:
				count_of_necessary_numbers_1++;
				break;
			default:
		}
		if (row_left[i] == 4) {
			count_of_necessary_numbers++;
		}
		printf("%d", row_left[i]);
		i++;
	}
	if (count_of_necessary_numbers_4 != 2 && count_of_necessary_numbers_3 != 3 && count_of_necessary_numbers_2 !== 4 && count_of_necessary_numbers_1 != 2) {
		i = 0;
		while (i < 4)
		{
			switch(row_right[i])
			{
				case 4:
					count_of_necessary_numbers_4++;
					break;
				case 3:
					count_of_necessary_numbers_3++;
					break;
				case 2:
					count_of_necessary_numbers_2++;
					break;
				case 1:
					count_of_necessary_numbers_1++;
					break;
				default:
			}
			i++;
		}
	}
	if (count_of_necessary_numbers_4 != 2 && count_of_necessary_numbers_3 != 3 && count_of_necessary_numbers_2 !== 4 && count_of_necessary_numbers_1 != 2) {
		i = 0;
		while (i < 4)
		{
			switch(col_up[i])
			{
				case 4:
					count_of_necessary_numbers_4++;
					break;
				case 3:
					count_of_necessary_numbers_3++;
					break;
				case 2:
					count_of_necessary_numbers_2++;
					break;
				case 1:
					count_of_necessary_numbers_1++;
					break;
				default:
			}
			i++;
		}
	}
	if (count_of_necessary_numbers_4 != 2 && count_of_necessary_numbers_3 != 3 && count_of_necessary_numbers_2 !== 4 && count_of_necessary_numbers_1 != 2) {
		i = 0;
		while (i < 4)
		{
			switch(col_down[i])
			{
				case 4:
					count_of_necessary_numbers_4++;
					break;
				case 3:
					count_of_necessary_numbers_3++;
					break;
				case 2:
					count_of_necessary_numbers_2++;
					break;
				case 1:
					count_of_necessary_numbers_1++;
					break;
				default:
			}
			i++;
		}
	}
	if (((row_left[0] == 4 || row_right[0] == 4) && (row_left[3] != 1 && row_right[3] != 1)) || 
		((row_right[0] == 4 && row_right[3] == 4) && (row_right[0] != 1 && row_right[3] != 1)) ||
		((col_up[0] == 4 && col_up[3] == 4) && (col_up[0] != 1 && col_up[3] != 1)) ||
		((col_down[0] == 4 && col_down[3] == 4) && (col_down[0] != 1 && col_down[3] != 1))
		)
	{
		return 0;
	}
	if (((row_left[0] == 1 && row_left[3] == 1) && (row_left[0] == 1 && row_left[3] == 1)) ||
		((row_right[0] == 1 && row_right[3] == 1) && (row_right[0] == 1 && row_right[3] == 1)) ||
		((col_up[0] == 1 && col_up[3] == 1) && (col_up[0] == 1 && col_up[3] == 1)) ||
		((col_down[0] == 1 && col_down[3] == 1) && (col_down[0] == 1 && col_down[3] == 1))
		)
	{
		return 0;
	}
	if (((row_left[0] == 3 && row_left[3] == 3) && (row_left[0] == 1 && row_left[3] == 1)) ||
		((row_right[0] == 1 && row_right[3] == 1) && (row_right[0] == 1 && row_right[3] == 1)) ||
		((col_up[0] == 1 && col_up[3] == 1) && (col_up[0] == 1 && col_up[3] == 1)) ||
		((col_down[0] == 1 && col_down[3] == 1) && (col_down[0] == 1 && col_down[3] == 1))
		)
	{
		return 0;
	}
	return count_of_necessary_numbers_4 == 0 && count_of_necessary_numbers_3 == 0 && count_of_necessary_numbers_2 == 0 && count_of_necessary_numbers_1 == 0 ? true : false;

}
