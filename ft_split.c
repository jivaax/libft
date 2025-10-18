/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:13:08 by jwira             #+#    #+#             */
/*   Updated: 2025/10/18 17:28:34 by jwira            ###   ########.fr       */
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
		if (arr[i] != c)
			i++;
		else if (arr[i] == c)
		{
			if (arr[i + 1] != c)
				w++;
			i++;
		}
	}
	w++;
	return (w);
}

static void	mall_l(char const *arr, char c, char **str)
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
		while (arr[i] && arr[i] != c)
		{
			l++;
			i++;
		}
		str[w] = ft_calloc((l + 1), sizeof(char *));
		w++;
	}
}

static void	scopy(int w, char const *arr, char c, char **str)
{
	int	i;
	int	cnt;
	int	n;

	(void)w;
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


	arr = ft_strtrim(s, &c);
	w = words(arr, c);
	str = ft_calloc ((w + 1), sizeof(char *));
	if (!str)
		return (NULL);
	mall_l(arr, c, str);
	scopy(w, arr, c, str);
	str[w] = NULL;
	free(arr);
	return (str);
}

//int	main(void)
//{
//	char	s[] = ",hello,,,,,,beautiful,,,world,,,,,,,,,,,,!,";
//	char	c = ',';
//	char	**str;
//	int		j;

//	j = 0;
//	str = ft_split(s, c);
//	while (str[j])
//		printf("%s\n", str[j++]);
//	free(str);
//	return (0);
//}