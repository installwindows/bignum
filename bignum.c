#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
char	addchars(char n1, char n2, char *reminder)
{
	int		a;
	int		b;
	int		r;

	a = n1 - '0';
	b = n2 - '0';
	r = a + b + (*reminder - '0');
	*reminder = r > 9 ? '1' : '0';
	r = r % 10;
	return (r + '0');
}

char	*ft_bigint_add(char *n1, char *n2)
{
	char	*result;
	char	*r;
	char	reminder;
	int		d1;
	int		d2;

	result = ft_strnew(ft_strlen(n1) + ft_strlen(n2) + 2 + 1);
	r = result;
	ft_strrev(n1);
	ft_strrev(n2);
	d1 = ft_strichr(n1, '.');
	d2 = ft_strichr(n2, '.');
	if (d1 > d2)
	{
		ft_strncpy(result, n1, d1 - d2);
		result += (d1 - d2);
		n1 += (d1 - d2);
	}
	else if (d1 < d2)
	{
		ft_strncpy(result, n2, d2 - d1);
		result += (d2 - d1);
		n2 += (d2 - d1);
	}
	reminder = '0';
	printf("%d %d\n", d1, d2);
	while (*n1 && *n2)
	{
		if (*n1 == '.' || *n2 == '.')
		{
			*result = '.';
			result++;
			n1++;
			n2++;
			continue;
		}
		*result = addchars(*n1, *n2, &reminder);
		result++;
		n1++;
		n2++;
	}
	while (*n1)
	{
		*result = addchars(*n1, '0', &reminder);
		result++;
		n1++;
	}
	while (*n2)
	{
		*result = addchars(*n2, '0', &reminder);
		result++;
		n2++;
	}
	if (reminder == '1')
		*result = '1';
	ft_strrev(n1);
	ft_strrev(n2);
	return (ft_strrev(r));
}


/*
int		main(int argc, char **argv)
{
	char	*result;

	if (argc == 3)
	{
		result = ft_bigint_add(argv[1], argv[2]);
		ft_putendl(result);
		free(result);
	}
}
*/
