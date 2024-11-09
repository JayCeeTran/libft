/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:05:01 by jtran             #+#    #+#             */
/*   Updated: 2024/11/01 11:05:24 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n == 0 || size == 0)
	{
		ptr = malloc (1);
		if (!ptr)
			return (NULL);
		ft_memset(ptr, 0, 1);
		return (ptr);
	}
	if (n > SIZE_MAX / size)
		return (NULL);
	ptr = (void *) malloc (n * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}
