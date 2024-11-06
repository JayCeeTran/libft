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
	if (len == 0 || start >= ft_strlen(s))
		return (NULL);
	temp = (char *) malloc(len * sizeof (char) + 1);
	if (!temp)
		return (NULL);
	while (i < len && s[start + i])
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/*int	main (void)
{
	char	string[] = "ABCDEF";
	char	*substr;

	substr = ft_substr(string, 3, 3);
	printf("%s\n", substr);
}*/
