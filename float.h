/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 05:31:19 by varnaud           #+#    #+#             */
/*   Updated: 2016/12/09 07:37:16 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_H
# define FLOAT_H
# include <stdlib.h>
# include "libft.h"

char	**mantissa;

void	set_mantissa(void)
{
	int		i;

	i = 0;
	mantissa = malloc(sizeof(char*) * 52);
	while (i < 52)
		mantissa[i++] = malloc(55);
	ft_strcpy(mantissa[0], ".5000000000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[1], ".2500000000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[2], ".1250000000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[3], ".0625000000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[4], ".0312500000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[5], ".0156250000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[6], ".0078125000000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[7], ".0039062500000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[8], ".0019531250000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[9], ".0009765625000000000000000000000000000000000000000000");
	ft_strcpy(mantissa[10], ".0004882812500000000000000000000000000000000000000000");
	ft_strcpy(mantissa[11], ".0002441406250000000000000000000000000000000000000000");
	ft_strcpy(mantissa[12], ".0001220703125000000000000000000000000000000000000000");
	ft_strcpy(mantissa[13], ".0000610351562500000000000000000000000000000000000000");
	ft_strcpy(mantissa[14], ".0000305175781250000000000000000000000000000000000000");
	ft_strcpy(mantissa[15], ".0000152587890625000000000000000000000000000000000000");
	ft_strcpy(mantissa[16], ".0000076293945312500000000000000000000000000000000000");
	ft_strcpy(mantissa[17], ".0000038146972656250000000000000000000000000000000000");
	ft_strcpy(mantissa[18], ".0000019073486328125000000000000000000000000000000000");
	ft_strcpy(mantissa[19], ".0000009536743164062500000000000000000000000000000000");
	ft_strcpy(mantissa[20], ".0000004768371582031250000000000000000000000000000000");
	ft_strcpy(mantissa[21], ".0000002384185791015625000000000000000000000000000000");
	ft_strcpy(mantissa[22], ".0000001192092895507812500000000000000000000000000000");
	ft_strcpy(mantissa[23], ".0000000596046447753906250000000000000000000000000000");
	ft_strcpy(mantissa[24], ".0000000298023223876953125000000000000000000000000000");
	ft_strcpy(mantissa[25], ".0000000149011611938476562500000000000000000000000000");
	ft_strcpy(mantissa[26], ".0000000074505805969238281250000000000000000000000000");
	ft_strcpy(mantissa[27], ".0000000037252902984619140625000000000000000000000000");
	ft_strcpy(mantissa[28], ".0000000018626451492309570312500000000000000000000000");
	ft_strcpy(mantissa[29], ".0000000009313225746154785156250000000000000000000000");
	ft_strcpy(mantissa[30], ".0000000004656612873077392578125000000000000000000000");
	ft_strcpy(mantissa[31], ".0000000002328306436538696289062500000000000000000000");
	ft_strcpy(mantissa[32], ".0000000001164153218269348144531250000000000000000000");
	ft_strcpy(mantissa[33], ".0000000000582076609134674072265625000000000000000000");
	ft_strcpy(mantissa[34], ".0000000000291038304567337036132812500000000000000000");
	ft_strcpy(mantissa[35], ".0000000000145519152283668518066406250000000000000000");
	ft_strcpy(mantissa[36], ".0000000000072759576141834259033203125000000000000000");
	ft_strcpy(mantissa[37], ".0000000000036379788070917129516601562500000000000000");
	ft_strcpy(mantissa[38], ".0000000000018189894035458564758300781250000000000000");
	ft_strcpy(mantissa[39], ".0000000000009094947017729282379150390625000000000000");
	ft_strcpy(mantissa[40], ".0000000000004547473508864641189575195312500000000000");
	ft_strcpy(mantissa[41], ".0000000000002273736754432320594787597656250000000000");
	ft_strcpy(mantissa[42], ".0000000000001136868377216160297393798828125000000000");
	ft_strcpy(mantissa[43], ".0000000000000568434188608080148696899414062500000000");
	ft_strcpy(mantissa[44], ".0000000000000284217094304040074348449707031250000000");
	ft_strcpy(mantissa[45], ".0000000000000142108547152020037174224853515625000000");
	ft_strcpy(mantissa[46], ".0000000000000071054273576010018587112426757812500000");
	ft_strcpy(mantissa[47], ".0000000000000035527136788005009293556213378906250000");
	ft_strcpy(mantissa[48], ".0000000000000017763568394002504646778106689453125000");
	ft_strcpy(mantissa[49], ".0000000000000008881784197001252323389053344726562500");
	ft_strcpy(mantissa[50], ".0000000000000004440892098500626161694526672363281250");
	ft_strcpy(mantissa[51], ".0000000000000002220446049250313080847263336181640625");
}

#endif
