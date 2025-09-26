/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:55:25 by jwira             #+#    #+#             */
/*   Updated: 2025/09/26 22:16:54 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "./libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

int	main(void)
{
	char s[] = "hdypynitgof";
	char	*str = ft_strdup(s);

	printf("%p\n%p", str, s);
	free(str);
	return (0);
}
