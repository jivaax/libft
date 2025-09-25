/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:59:24 by jwira             #+#    #+#             */
/*   Updated: 2025/09/25 17:51:18 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)
			|| nptr[i] == 43)
			i++;
		while (nptr[i] >= 48 && nptr[i] <= 57)
		{
			c = (c * 10) + nptr[i] - 48;
			i++;
		}
		if (nptr[i++] == 45)
			s = -1;
		else
			return (c * s);
	}
	return (c * s);
}

/*int	main(void)
{
	const char	x[] = "\t+2147483647";
	const char	y[] = "--2147483647";
	const char	z[] = "0";
	const char	a[] = "012.33";
	const char	b[] = "alpha0123";

	printf("%d\n", ft_atoi(x));
	printf("%d\n", ft_atoi(y));
	printf("%d\n", ft_atoi(z));
	printf("%d\n", ft_atoi(a));
	printf("%d", ft_atoi(b));
	return (0);
}*/
