/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:37:43 by jwira             #+#    #+#             */
/*   Updated: 2025/10/08 23:47:03 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static int	trimmed(char const *set, char c)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			r = 1;
			return (r);
		}
		i++;
	}
	return (r);
}

static int	front(char const *s1, char const *set)
{
	int		i;
	int		r;

	i = 0;
	r = 1;
	while (s1[i] && r != 0)
	{
		r = trimmed(set, s1[i]);
		if (r != 0)
			i++;
	}
	return (i);
}

static int	back(char const *s1, char const *set)
{
	int		j;
	int		r;

	r = 1;
	j = ft_strlen(s1);
	while (j > 0 && r != 0)
	{
		if (r != 0)
			j--;
		r = trimmed(set, s1[j]);
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	i = front(s1, set);
	j = back(s1, set);

	if (j == 0)
	{
		trim = malloc(1);
		ft_bzero(trim, 1);
		return (trim);
	}
	trim = malloc((j - i) + 2);
	ft_strlcpy(trim, &s1[i], (j - i) + 2);
	if (!trim)
		return (NULL);
	return (trim);
}

/*int	main(void)
{
	char	s1[] = "   xxx   xxx";
	char	set[3] = {" x"};
	char	*trim;

	trim = ft_strtrim(s1, set);
	printf("%s", trim);
	free(trim);
	return (0);
}*/
