/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:15:32 by jwira             #+#    #+#             */
/*   Updated: 2025/09/26 17:37:23 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		cc;
	size_t				i;

	str = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)&str[i]);
		i++;
	}
	if (cc == 0)
		return ((void *)&str[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	s[] = "please work great";
	int	c = 0;

	printf("%s", (char *)ft_memchr(s + 6, c, 10));
	return (0);
}*/
