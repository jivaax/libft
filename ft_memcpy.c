/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:33:00 by jwira             #+#    #+#             */
/*   Updated: 2025/09/25 21:44:08 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;

	while (n--)
		*d++ = *s++;
	return (d);
}

/*int	main(void)
{
	char	d[] = "hijklmn";
	char	s[] = "abcdefg";
	int	x = 24;
	int	y = 42;

	ft_memcpy(d , s, 4);
	printf("%s\n", d);
	ft_memcpy(&x, &y, 4);
	printf("%d\n", x);
	return (0);
}*/
