/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:52:12 by jtran             #+#    #+#             */
/*   Updated: 2024/08/22 17:25:48 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	stringcount(char str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (str == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	**stringcopy(char *str, char *charset, char **arr)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		size = 0;
		while (stringcount(str[i], charset) == 1 && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (stringcount(str[i], charset) == 0 && str[i])
		{
			arr[j][size] = str[i];
			i++;
			size++;
		}
		arr[j][size] = '\0';
		j++;
	}
	arr[j] = 0;
	return (arr);
}

int	wordcount(char *str, char *charset)
{
	int	i;
	int	wordscount;

	i = 0;
	wordscount = 0;
	while (str[i])
	{
		while (stringcount(str[i], charset) == 1 && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		wordscount++;
		while (stringcount(str[i], charset) == 0 && str[i])
			i++;
	}
	return (wordscount);
}

char	**malloc_strings(char *str, char *charset, char **arr)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	size = 0;
	j = 0;
	while (str[i])
	{
		size = 0;
		while (stringcount(str[i], charset) == 1 && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (stringcount(str[i], charset) == 0 && str[i])
		{
			size++;
			i++;
		}
		arr[j] = malloc(size + 1);
		j++;
	}
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		wordscount;
	char	**wordinarray;

	wordscount = wordcount(str, charset);
	wordinarray = malloc (sizeof(char *) * (wordscount + 1));
	if (!wordinarray)
		return (NULL);
	malloc_strings(str, charset, wordinarray);
	stringcopy(str, charset, wordinarray);
	return (wordinarray);
}

/*int main()
{
	char    string[] = "bbaagaaabaaabgaaa63663";
        char    sep[] = "bg";
	char	**array;
	int	i;
	
	i = 0;
	array = ft_split(string, sep);
	while (array[i] != 0)
	{
		printf("sting i is %s\n", array[i]);
    		i++;
    	}
    	free (array); 
    return 0;
}*/
