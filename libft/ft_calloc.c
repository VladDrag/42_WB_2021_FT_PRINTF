/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:26 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:59:40 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Recreating the Calloc function from the manual.
**	Memory allocation is done by multiplying nmemb and size.
**	If the memory allocation failed, we return pointer, that can be freed after.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*temp;
	size_t			res;
	size_t			i;
	unsigned char	*stemp;

	res = nmemb * size;
	temp = malloc(nmemb * size);
	stemp = temp;
	i = 0;
	if (temp == 0)
		return (temp);
	if (temp)
	{
		while (res > 0)
		{
			stemp[i] = '\0';
			i++;
			res--;
		}
	}
	return (temp);
}

/*	If the memory allocation was successful memory is set to zero.
**	If I have started properly, For easier reference this could have been done
**	using ft_bzero as well.
*/
