/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:04:48 by pthiruma          #+#    #+#             */
/*   Updated: 2023/02/08 17:02:37 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], len);
		i++;
	}
}
