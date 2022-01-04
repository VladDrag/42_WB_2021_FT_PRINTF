/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:25 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:58:58 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_precision_checker(t_print *tab)
{
	if (tab->precision == 0 && tab->zero == 1)
	{
		tab->zero = 0;
		tab->percentage = 1;
	}
	if (tab->precision < 0)
	{
		tab->precision = 0;
		tab->point = 0;
	}
}

void	ft_width_checker(t_print *tab)
{
	if (tab->width < 0)
	{
		tab->width *= -1;
		tab->dash = 1;
		tab->zero = 0;
	}
}

int	ft_sign_checker(t_print *tab, int j)
{
	tab->sign = 1;
	tab->space_flag = 0;
	return (j * -1);
}

int	ft_flag_checker(char c)
{
	if (c == '-' || c == '.')
		return (1);
	return (0);
}

/*
**	This file contains funcions:
**	ft_precision_checker - checks for precision
**	ft_width_checker - checks for width
**	ft_sign_checker - sign/minus check for the structure
**	ft_flag_checker - sign/minus check
*/
