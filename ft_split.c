/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:13:08 by jwira             #+#    #+#             */
/*   Updated: 2025/11/05 19:55:23 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

static int	words(char const *arr, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (arr[i])
	{
		while (arr[i] && arr[i] == c)
			i++;
		if (arr[i])
		{
			w++;
			while (arr[i] && arr[i] != c)
				i++;
		}
	}
	return (w);
}

static int	mall_l(char const *arr, char c, char **str)
{
	int	l;
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (arr[i])
	{
		l = 0;
		while (arr[i] && arr[i] == c)
			i++;
		while (arr[i] && arr[i++] != c)
			l++;
		str[w] = ft_calloc(l + 1, sizeof(char));
		if (!str[w])
		{
			while (w-- > 0)
				free(str[w]);
			free(str);
			return (0);
		}
		w++;
	}
	return (1);
}

static void	scopy(char const *arr, char c, char **str)
{
	int	i;
	int	cnt;
	int	n;

	i = 0;
	n = 0;
	while (arr[i])
	{
		cnt = 0;
		while (arr[i] && arr[i] == c)
			i++;
		while (arr[i] && arr[i] != c)
		{
			str[n][cnt] = arr[i];
			cnt++;
			i++;
		}
		str[n][cnt] = '\0';
		n++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		w;
	char	**str;
	char	*arr;

	if (!s)
		return (0);
	arr = ft_strtrim(s, &c);
	if (!arr)
		return (NULL);
	w = words(arr, c);
	str = ft_calloc((w + 1), sizeof(char *));
	if (!str)
		return (NULL);
	if (!mall_l(arr, c, str))
	{
		free(arr);
		return (NULL);
	}
	scopy(arr, c, str);
	str[w] = NULL;
	free(arr);
	return (str);
}

//int	main(void)
//{
//	//char	s[] = "lsls,cdcd,soso";
//	//char	c = ',';
//	char	**str;
//	int		j;
//
//	j = 0;
//	str = ft_split(" adipiscing elit. Sed non risus. Suspendisse", ' ');
//	while (str[j])
//		printf("%s\n", str[j++]);
//	j = 0;
//	while (str[j])
//		free(str[j++]);
//	free(str);
//	return (0);
//}