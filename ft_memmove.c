/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:24:42 by jwira             #+#    #+#             */
/*   Updated: 2025/09/25 22:58:39 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (s > d)
		while (n--)
			*d++ = *s++;
	if (s < d)
	{

	}
	return (d);
}

int	main(void)
{
	char	d[] = "abcdefghijkl";
	char	s[] = "mnoprstuvw";

	ft_memmove(d + 5, s, 7);
	printf("%s\n", d);

	return (0);
}
