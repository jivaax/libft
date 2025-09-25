/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:02:40 by jwira             #+#    #+#             */
/*   Updated: 2025/09/25 19:06:41 by jwira            ###   ########.fr       */
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
	int	x = 69;
	char s[] = "hello world";
	ft_memset(&x, 1, 4);
	ft_memset(s, 'b', 5);
	printf("%d\n", x);
	printf("%s", s);
	return (0);
}*/
