/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:02:40 by jwira             #+#    #+#             */
/*   Updated: 2025/09/24 13:38:24 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;

	d = s;
	while (n--)
	{
		*d = (unsigned char)c;
		d++;
	}
	return (s);
}

/*int	main(void)
{
	int x = 69;

	ft_memset(&x, 1, 4);
	printf("%d", x);
	return (0);
}*/
