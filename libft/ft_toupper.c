/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:00 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:01:46 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Recreating toupper function from the manual, checking if the given int c
**	is within the ASCII range of lowercase letter, and if it is, we are
**	deducing the value by 32 and turning it into a uppercase letter.
**	If the value is not within the given range we just return c.
**
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
