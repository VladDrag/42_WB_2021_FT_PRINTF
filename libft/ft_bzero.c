/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:20 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:59:35 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Recreation of the bzero function from man. According to the man page, this
**	functions erases the data in the n bytes of memory starting at the location,
**	pointed py s, by writing zeros(bytes containing '\0'). I see that I could
**	have used ft_memset here now, but let that be a lesson to a future you Deki!
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*(ptr + i) = '\0';
		i++;
	}
}
