/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:15:58 by jtran             #+#    #+#             */
/*   Updated: 2024/11/06 14:11:16 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	divider;
	int	digit;

	divider = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= (-1);
	}
	if (n == -2147483648)
        	write (fd, "-2147483648", 11);
	while (n / divider > 9)
		divider *= 10;
	while (divider > 0)
	{
		digit = n / divider + '0';
		ft_putchar_fd(digit, fd);
		n %= divider;
		divider /= 10;
	}
}

/*int	main(void)
{
	ft_putnbr_fd(1000, 1);
	ft_putnbr_fd(-1000, 1);
	ft_putnbr_fd(143430, 1);
}*/