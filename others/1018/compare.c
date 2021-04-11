
#include "chess.h"

void	em_compare(char *box, int len)
{
	int i;
	int w_count = 0;
	int b_count = 0;
	int n_count = 0;
	int ret = 0;
	
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			n_count++;
		else if (i % 2 == 0 && box[i] + w_box[i] != 96)
			w_count++;
		else if (i % 2 != 0 && box[i] + w_box[i] != 98)
			w_count++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			n_count++;
		else if (i % 2 == 0 && box[i] + b_box[i] != 98)
		{
			b_count++;
		//	printf("\nb_count_98 when i = %d\n", i);
		}
		else if (i % 2 != 0 && box[i] + b_box[i] != 96)
		{
			b_count++;
		//	printf("\nb_count_96 when i = %d\n", i);
		}
		i++;
	}
	ret = min(w_count, b_count);
	printf("\nmin count: %d", ret);
}
