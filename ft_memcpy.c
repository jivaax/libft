/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:33:00 by jwira             #+#    #+#             */
/*   Updated: 2025/10/19 14:52:03 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	int					i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}

//int	main(void)
//{
//	char	d[] = "zyxwvutsrqponmlkjihgfedcba";
//	void	*s;
//	s = malloc(30 * sizeof(*s));
//	ft_memset(s, 'j', 30);

//	printf("%s\n", (char *)ft_memcpy(d, s, 14));
//	return (0);
//}
