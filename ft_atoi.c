/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:59:24 by jwira             #+#    #+#             */
/*   Updated: 2025/09/30 23:08:54 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *nptr)
{
	int	c;
	int	i;
	int	s;

	c = 0;
	i = 0;
	s = 1;
	while (nptr[i])
	{
		while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
			i++;
		while (nptr[i] >= 48 && nptr[i] <= 57)
		{
			c = (c * 10) + nptr[i] - 48;
			i++;
		}
		if ((nptr[i] == 45) && (nptr[i + 1] >= 48 && nptr[i + 1] <= 57))
			s = -1;
		else if ((nptr[i] == 43) && (nptr[i + 1] >= 48 && nptr[i + 1] <= 57))
			s = 1;
		else
			return (c * s);
		i++;
	}
	return (c * s);
}
