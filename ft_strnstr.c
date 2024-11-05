/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:19:30 by jtran             #+#    #+#             */
/*   Updated: 2024/10/31 12:19:34 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t n)
{
	size_t	i;
	int	j;

	i = 0;
	if (!search[i])
		return ((char*)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (search[j] && (i + j) < n)
		{
			if (str[i + j] == search[j])
				j++;
			else
				break ;
		}
		if (search[j] == '\0')
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char    string[] = "Try to";
    char    str[] = "Try to1";
    char *dest;
    dest = ft_strnstr(string, str, 40);
    

	if (dest != NULL)
    		printf("%s\n", dest);
    	else if (dest == NULL)
    		printf("its null");
}*/
