/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 22:25:20 by jwira             #+#    #+#             */
/*   Updated: 2025/10/18 23:07:17 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

static int	size(int n)
{
	int	s;

	if (n == 0)
		return (1);
	s = 0;
	if (n < 0)
		s++;
	while (n != 0)
	{
		n = n / 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		s;

	s = size(n);
	nbr = malloc(s + 1);
	if (!nbr)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		nbr[0] = '-';
		n = -n;
	}
	nbr[s] = '\0';
	if (n == 0)
		nbr[--s] = '0';
	while (n != 0)
	{
		nbr[--s] = (n % 10) + 48;
		n = n / 10;
	}
	return (nbr);
}

//int	main(void)
//{
//	int		n;
//	n = 42;
//	char	*s = ft_itoa(n);
//	printf("%s", s);
//	free(s);
//	return (0);
//}
