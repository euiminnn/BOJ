#include "chess.h"

int		min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

void	em_print_box(char *box, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		printf("%c", box[i]);
		i++;
	}
}
