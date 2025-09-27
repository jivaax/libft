/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 10:54:19 by jwira             #+#    #+#             */
/*   Updated: 2025/09/27 12:28:05 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n >= 0 && n <= 9)
	{
		nbr = n + 48;
		write (fd, &nbr, 1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/
