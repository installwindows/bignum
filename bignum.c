/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bignum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 17:20:20 by varnaud           #+#    #+#             */
/*   Updated: 2016/12/10 07:58:58 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_bignum.h"
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

char	*ft_bignum_mtp(char *n1, int by)
{
	char	*result;

	result = ft_itoa(0);
	while (by--)
	{
		//free(result);
		result = ft_bignum_add(result, n1);
	}
	return (result);
}

char	*ft_bignum_add(char *n1, char *n2)
{
	char	*str1;
	char	*str2;
	char	*result;
	char	*r;
	char	reminder;
	int		d1;
	int		d2;

	str1 = ft_strdup(n1);
	str2 = ft_strdup(n2);
	result = ft_strnew(ft_strlen(n1) + ft_strlen(n2) + 2 + 1);
	r = result;
	ft_strrev(str1);
	ft_strrev(str2);
	d1 = ft_strichr(str1, '.');
	d2 = ft_strichr(str2, '.');
	if (d1 > d2)
	{
		ft_strncpy(result, str1, d1 - d2);
		result += (d1 - d2);
		str1 += (d1 - d2);
	}
	else if (d1 < d2)
	{
		ft_strncpy(result, str2, d2 - d1);
		result += (d2 - d1);
		str2 += (d2 - d1);
	}
	reminder = '0';
	//printf("%d %d\n", d1, d2);
	while (*str1 && *str2)
	{
		if (*str1 == '.' || *str2 == '.')
		{
			*result = '.';
			result++;
			str1++;
			str2++;
			continue;
		}
		*result = addchars(*str1, *str2, &reminder);
		result++;
		str1++;
		str2++;
	}
	while (*str1)
	{
		*result = addchars(*str1, '0', &reminder);
		result++;
		str1++;
	}
	while (*str2)
	{
		*result = addchars(*str2, '0', &reminder);
		result++;
		str2++;
	}
	if (reminder == '1')
		*result = '1';
	return (ft_strrev(r));
}

/*
int		main(int argc, char **argv)
{
	char	*result;

	if (argc == 3)
	{
		result = ft_bignum_add(argv[1], argv[2]);
		ft_putendl(result);
		free(result);
	}
}
*/
