/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:15:32 by jwira             #+#    #+#             */
/*   Updated: 2025/09/29 22:03:17 by jwira            ###   ########.fr       */
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
	if (cc == 0 && n != 0)
		return ((void *)&str[i]);
	return (NULL);
}

/*int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	int	c = 0;

	printf("%s", (char *)ft_memchr(s, c, 0));
	return (0);
}*/
