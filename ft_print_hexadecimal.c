/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:44 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:58:43 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_hexadecimal(t_print *tab, int c)
{
	unsigned int	j;
	int				len;
	char			*num;

	j = va_arg(tab->args, unsigned int);
	if (!j)
	{
		ft_print_zero(tab);
		return ;
	}
	len = ft_numlenbase(j, 16);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return ;
	num = ft_itoa_base(num, j, 16, c);
	ft_update_tab(tab, len);
	ft_right_duplicatex(tab);
	while (num && len-- > 0)
		tab->total_length += write(1, &num[len], 1);
	ft_left_duplicatex(tab);
	free(num);
}

/*
**	In this file we have function:
**	ft_print_hexadecimal - purpose of this function is to print hexadecimal
**	number, and we get hexadecimal number by dividing the base of the number
**	 with the number 16.
**
**	After that we are counting the length of the given number , and getting the
**	number and turning it to ascii value value using ft_itoa_base function
**
**	Before the printing and after the printing number, right and left padding
**	is being handled.
*/
