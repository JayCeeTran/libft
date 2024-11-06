/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:36:15 by jtran             #+#    #+#             */
/*   Updated: 2024/11/06 14:12:03 by jtran            ###   ########.fr       */
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
	if (chr == '\0')
		return ((char *) &str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			pos_of_last_ch--;
		if (pos_of_last_ch == 0)
			return ((char *)str);
		i++;
	}
	return (NULL);
}
