/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:37:43 by jwira             #+#    #+#             */
/*   Updated: 2025/09/27 18:55:05 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	
}

int	main(void)
{
	char	s1[] = "lllkkjolhello worldkkkoolljjj";
	char	set[5] = {"lokj"};
	char	*trim;

	trim = ft_strtrim(s1, set);
	return (0);
}
