/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:33 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:59:44 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Recreation of the isalnum function. This functions checks whether character
**	is alphabetcal or numberical. And that is done by using ft_isalpha and
**	ft_isdigit function. If the character is within ASCII it is proven true.
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
**	Then we return value 1. If the expression is false, we return the (0).
*/