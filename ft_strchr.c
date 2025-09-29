/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:22:44 by jwira             #+#    #+#             */
/*   Updated: 2025/09/29 22:45:19 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	unsigned char	ch;

	ch = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == 0)
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	s[] = "tuptuptup";

	printf("%s", ft_strchr(s, 't' + 256));
	return (0);
}*/
