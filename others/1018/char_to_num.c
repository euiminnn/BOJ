#include "chess.h"

void	em_char_to_num(char *org_box, int len)
{
	int i;
	i = 0;
	while (i < len)
	{
		if (org_box[i] == 'W')
			org_box[i] = '0';
		else if (org_box[i] == 'B')
			org_box[i] = '1';
		else
			org_box[i] = '\n';
		i++;
	}
//	printf("org_box: \n");
//	em_print_box(org_box, len);
