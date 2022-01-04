/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:41 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:59:49 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Recreation of isalpha man. This function checks for an alphabetical
**	character. Check is done by comparing values on ASCII table, and depending
**	of the ASCII table we return the value 1 or 0. We return 1 if the value is
**	within the capital A - Z and lowercase a - z range.
**	If the int is not within the given range we return false value.
*/

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
