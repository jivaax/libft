/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:02:12 by jwira             #+#    #+#             */
/*   Updated: 2025/09/27 18:58:47 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(len + 1);
	if (!str || start + len > ft_strlen(s))
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	s[] = "hello world";
	char	*str = ft_substr(s, 12, 5);

	printf("%s", str);
	free(str);
	return (0);
}*/
