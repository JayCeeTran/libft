/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:24:43 by jtran             #+#    #+#             */
/*   Updated: 2024/10/31 11:24:45 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destptr;
	const unsigned char	*srcptr;
	int					i;
	size_t				n2;
	unsigned char		*temp;

	i = 0;
	n2 = n;
	destptr = (unsigned char *) dest;
	srcptr = (const unsigned char *) src;
	temp = (unsigned char *) malloc(n * sizeof(unsigned char));
	if (!temp)
		return (NULL);
	while (n--)
	{
		temp[i] = srcptr[i];
		i++;
	}
	i = 0;
	while (n2--)
		*destptr++ = temp[i++];
	free (temp);
	return (dest);
}

/*int main(void)
{
    char    string[12] = "hellooo";
    char    dest[50] = "worldfor";
    ft_memmove(dest, string, 5);
    printf("%s\n", dest);
}*/
