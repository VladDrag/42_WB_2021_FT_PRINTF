/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:21:06 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:00:22 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The  memcpy()  function copies n bytes from memory area src to memory
**	area dest.  The memory areas must not overlap.
**
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;

	destination = (char *)dest;
	while (n)
	{
		*destination = *(const char *)src;
		destination++;
		src++;
		n--;
	}
	return (dest);
}
