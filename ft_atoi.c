/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:59:24 by jwira             #+#    #+#             */
/*   Updated: 2025/10/19 16:44:59 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	s;

	c = 0;
	s = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 45)
	{
		s = -1;
		nptr++;
	}
	else if (*nptr == 43)
	{
		s = 1;
		nptr++;
	}
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		c = (c * 10) + *nptr - 48;
		nptr++;
	}
	return (c * s);
}

//int	main(void)
//{
//	printf("%d", ft_atoi("+47+5"));
//	return (0);
//}
