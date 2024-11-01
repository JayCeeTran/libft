/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:01:14 by jtran             #+#    #+#             */
/*   Updated: 2024/10/31 11:01:26 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_white(char c)
{
	if (c == '\n' || c == '\r' || c == ' '
		|| c == '\f' || c == '\v' || c == '\t')
		return (1);
	return (0);
}

static int	check_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[(*i)])
	{
		if (check_white(str[(*i)]))
			(*i)++;
		else
			break ;
	}
	if (str[(*i)++] == '-')
		sign *= -1;
	else if (str[(*i)] == '+')
		(*i)++;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	value = 0;
	i = 0;
	sign = check_sign(str, &i);
	while (str[i] <= '9' && str[i] >= '0')
	{
		value = value * 10 + (str[i] - 48);
		i++;
	}
	return (value * sign);
}
