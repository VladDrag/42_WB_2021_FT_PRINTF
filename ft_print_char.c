/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:40 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:59:04 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_char(t_print *tab)
{
	char	a;

	a = va_arg(tab->args, int);
	ft_update_tab(tab, 1);
	if (tab->width && !tab->dash)
		ft_right_character_handler(tab, 0);
	tab->total_length += write(1, &a, 1);
	if (tab->width && tab->dash)
		ft_left_character_handler(tab, 0);
}

int	ft_handler_space(t_print *tab, int index)
{
	index++;
	tab->space_flag = 1;
	return (index);
}

/*
**	This file contains funcions:
**	ft_print_char - is used for printing characters and handling the padding on
**	both sides
**	ft_handler_space - handling function for detecting space character and
**	moving index one place forward.
*/
