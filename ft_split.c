/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:19:59 by jtran             #+#    #+#             */
/*   Updated: 2024/11/06 14:10:27 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(const char *str, char c)
{
	size_t	words;
	char	**str_arr;
	int		j;
	int		poscount;

	j = 0;
	words = word_count(str, c);
	str_arr = malloc((words + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	while (*str)
	{
		poscount = 0;
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			str++;
			poscount++;
		}
		str_arr[j] = ft_substr(str - poscount, 0, poscount);
		j++;
	}
	str_arr[j] = NULL;
	return (str_arr);
}

/*int	main(void)
{
	char	*str;
	char	**arr;
	int		i;

	str = "Hello  World Moi";
	i = 0;
	arr = ft_split(str, ' ');
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}*/
