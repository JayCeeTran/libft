/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:40:04 by jtran             #+#    #+#             */
/*   Updated: 2024/11/01 11:42:57 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(const char *str, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i])
	{	
		j = 0;
		while (set[j] && set[j] != str[i])
			j++;
		i++;
		if (set[j] == '\0')
			break ;
	}
	return (i - 1);
}

static size_t	find_end(const char *str, const char *set, int i)
{
	int	j;

	while (i > 0)
	{	
		j = 0;
		while (set[j] && set[j] != str[i - 1])
			j++;
		i--;
		if (set[j] == '\0')
			break ;
	}
	return (i);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*copy;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = find_start(str, set);
	end = find_end(str, set, ft_strlen(str));
	copy = (char *) malloc((ft_strlen(&str[start]) - end + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (start <= end)
	{
		copy[i] = str[start];
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
