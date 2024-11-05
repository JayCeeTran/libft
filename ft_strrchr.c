/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:36:15 by jtran             #+#    #+#             */
/*   Updated: 2024/10/29 12:51:47 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_ch(const char *str, int c)
{
	int	charcount;

	charcount = 0;
	while (*str != '\0')
	{
		if (*str == c)
			charcount++;
		str++;
	}
	return (charcount);
}

char	*ft_strrchr(const char *str, int chr)
{
	int	pos_of_last_ch;
	int	i;

	i = 0;
	pos_of_last_ch = count_ch(str, chr);
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			i++;
		if (i == pos_of_last_ch)
			return ((char*)str);
	}
	return (NULL);
}
