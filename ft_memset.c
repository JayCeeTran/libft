/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:40:01 by jtran             #+#    #+#             */
/*   Updated: 2024/10/29 14:56:34 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*string;

	string = (unsigned char *) str;
	while (n--)
		*string++ = (unsigned char) c;
	return (str);
}

/*int	main(void)
{
	char	str[10];
	int	arr[10];
	ft_memset(arr, 5, sizeof(arr));
	int i;
	for (i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}
	ft_memset(str, 'o', 7);
	printf("%s", str);

}*/
