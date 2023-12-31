/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:46:41 by pthiruma          #+#    #+#             */
/*   Updated: 2023/02/08 11:20:02 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdec(int i, int *len)
{
	char	c;

	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (i < 0)
	{
		ft_putchar('-', len);
		i *= -1;
	}
	if (i > 9)
		ft_putdec_u(i / 10, len);
	c = i % 10 + 48;
	ft_putchar(c, len);
}
