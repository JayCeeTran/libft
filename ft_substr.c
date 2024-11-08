/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:59:52 by jtran             #+#    #+#             */
/*   Updated: 2024/10/31 17:24:14 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*temp;
	size_t		i;

	i = 0;
	temp = (char *) malloc(len * sizeof (char) + 1);
	if (!temp)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		*temp = '\0';
		return (temp);
	}
	while (i < len && s[start + i])
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
