/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:13:08 by jwira             #+#    #+#             */
/*   Updated: 2025/10/12 18:49:56 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static	int	words_len(char const *s, char c, int i)
{
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		l;
	char	**str;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	l = words_len(s, c, i) + 1;
	if (!str)
		free(str);

	return (str);
}

int	main(void)
{
	char	str[] = "hello,beautiful,world,!";
	char	c = ',';
	char	**s;

	s = ft_split(str, c);
	return (0);
}
