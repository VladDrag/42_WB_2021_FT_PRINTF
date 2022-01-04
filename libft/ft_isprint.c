/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:55 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 11:19:57 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Recreation of isprint function in C library.
**	This functions checkes whether the c is within 32 or 126 ASCII range, and
**	return value is given based on the condition statement. If it is, we return
**	1 (true), and if it is not, we return 0 (false).
*/

int	ft_isprint(int c)
{
	if ((c >= ' ') && (c <= '~'))
		return (1);
	return (0);
}
