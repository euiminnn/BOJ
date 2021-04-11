#include "chess.h"

void	em_copy_box(int len)
{
	int i;
	
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			w_box[i] = '\n';
		else if (i % 2 == 0)
			w_box[i] = '0';
		else
			w_box[i] = '1';
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			b_box[i] = '\n';
		else if (i % 2 == 0)
			b_box[i] = '1';
		else
			b_box[i] = '0';
		i++;
	}
	printf("w_box: \n");
	em_print_box(w_box, len);
	printf("\n");
	printf("b_box: \n");
	em_print_box(b_box, len);
	printf("\n");

}