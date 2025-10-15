/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:13:08 by jwira             #+#    #+#             */
/*   Updated: 2025/10/15 14:55:38 by jwira            ###   ########.fr       */
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

static int	words_count(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] == c && s[i + 1] == c)
				i++;
		}
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		w;
	char	**str;

	w = words_count(s, c);
	while (s[i])
	{
		str = malloc(words_len(s, c, i) + 1);
		if (!str)
			free(str);
		ft_strlcpy(str, s, );
	}
	return (str);
}

int	main(void)
{
	char	s[] = ",hello,,,,,,beautiful,,,world,,,,,,,,,,,,!,";
	char	c = ',';
	char	**str;

	str = ft_split(s, c);
	return (0);
}
