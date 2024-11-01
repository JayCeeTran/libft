/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:48:33 by jtran             #+#    #+#             */
/*   Updated: 2024/10/31 12:48:50 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*destptr;
	unsigned char	*srcptr;

	destptr = (unsigned char *) dest;
	srcptr = (unsigned char *) src;
	while (n--)
		*destptr++ = *srcptr++;
	return (dest);
}
