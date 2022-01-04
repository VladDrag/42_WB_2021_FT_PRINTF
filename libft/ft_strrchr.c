/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:23:44 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:01:31 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This functions works the same way as strchr, but only in reverese orer
**
**
*/

char	*ft_strrchr(const char *str, int c)
{
	char		*temp;
	size_t		i;

	temp = (char *)str;
	i = ft_strlen(str);
	if ((char )c == '\0')
		return ((char *)str + i);
	while (i > 0)
	{
		i--;
		if (temp[i] == c)
			return (&temp[i]);
	}
	return (0);
}
