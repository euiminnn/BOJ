#include "chess.h"

int		main(void)
{
	char box[2500];
	int m;
	int n;
	int i;
	int len;

	scanf("%d %d", &m, &n);
	i = 0;
	len = (m + 1) * n;
	while (i < len)
	{
		scanf("%c", &box[i]);
		i++;
	}
//	em_copy_box(len);
	em_char_to_num(box, len);
	em_cut(box, m, n, len);
//? if input error ?
//	em_print_box(box, len);
	return (0);
}
