#include "chess.h"

void	em_cut(char *box, int m, int n, int len)
{
	char cutted_box[9 * 8];
	int i;
	int j;
	int k;
	i = 0;
	j = 0;
	k = 0;
	while (n > 0)
	{
		while (i < m*j + 9)
		{
			cutted_box[i + k] = box[i + k];
			i++;
		}
		cutted_box[i++] = '\n';
		n--;
		j++;
		k = m*j;
	}

	while (i < 8 + 1)
	{
		cutted_box[i] = box[i];
		i++;
	}
	i = m;
	while (i < m + 8 + 1)
	{
		cutted_box[i] = box[i];
		i++;
	}
	i = m + m;
	while (i < m + m + 8 + 1)
	{
		cutted_box[i] = box[i];
		i++;
	}

	em_print_box(cutted_box, len);
//	em_compare(cutted_box, len);
}