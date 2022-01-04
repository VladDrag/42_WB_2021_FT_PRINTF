/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:23:29 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:01:22 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Applies the function ’f’ to each character of the string ’s’ to create a
**	new string (with malloc(3)) resulting from successive applications of ’f’.
**	The string created from the successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!temp)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		temp[index] = f(index, s[index]);
		index++;
	}
	temp[index] = '\0';
	return (temp);
}
