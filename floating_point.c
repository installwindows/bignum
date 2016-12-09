/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floating_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 00:24:33 by varnaud           #+#    #+#             */
/*   Updated: 2016/12/09 07:37:14 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "float.h"
#include "ft_bignum.h"
#include "libft.h"

char	*print_float(double d)
{
	int					i;
	int					exponent;
	char				*str;
	unsigned long long	mask;
	unsigned long long	num;

	ft_memcpy(&num, &d, 8);
	exponent = 0;
	mask = 0x8000000000000000ull;
	//TODO sign
	mask >>= 1;
	exponent = (num >> 52) - 1023;
	printf("%d\n", exponent);
	str = ft_strnew(1);
	mask = 0x8000000000000ull;
	i = 0;
	while (mask > 0)
	{
		char	*tmp = str;
		if (num & mask)
		{
			str = ft_bigint_add(str, mantissa[i]);
			free(tmp);
		}
		mask >>= 1;
		printf("%2d",i);
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	*result;

	set_mantissa();
	if (argc == 3)
	{
		result = ft_bigint_add(argv[1], argv[2]);
		ft_putendl(result);
		free(result);
	}
	else
		printf("\n%s\n", print_float(2.625));
}
