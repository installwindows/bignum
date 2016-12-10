/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_setstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 07:23:55 by varnaud           #+#    #+#             */
/*   Updated: 2016/12/10 09:09:50 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*free_setstr(char *src, char *str, int order,
	   	char *(*strfunc)(const char *, const char *))
{
	char	*tmp;

	tmp = src;
	src = order ? strfunc(src, str) : strfunc(str, src);
	free(tmp);
	return (src);
}

int		main(void)
{
	char	*src;

	src = ft_itoa(1);
	src = free_setstr(src, "-", 0, ft_strjoin);
	printf("%s\n", src);
}
