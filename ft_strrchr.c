/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:14:25 by jwira             #+#    #+#             */
/*   Updated: 2025/09/24 22:22:33 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[i]);
	while (i > 0 && s[--i])
		if (s[i] == c)
			return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	s[] = "please work great";
	int	c;

	c = 0;
	printf("%p", ft_strrchr(s, c));
	return (0);
}*/
