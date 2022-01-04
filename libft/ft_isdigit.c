/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:50 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:59:57 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Recreation of isdigit function in C library.
**	This functions checkes whether the c is within 0 or 9 digit range, and
**	return value is given based on the condition statement. If it is, we return
**	1 (true), and if it is not, we return 0 (false).
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
