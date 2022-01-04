/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:22:50 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:01:03 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strchr() function returns a pointer to the first occurrence of the
**	character c in the string s.
**
*/

char	*ft_strchr(const char *str, int c)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (char *)str;
	if (str[i] != '\0')
	{
		while (temp[i] != '\0')
		{
			if (temp[i] == (char )c)
				return (&temp[i]);
			i++;
		}
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}
