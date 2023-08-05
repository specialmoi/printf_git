/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:57:01 by pthiruma          #+#    #+#             */
/*   Updated: 2023/07/05 09:56:03 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *s, ...);
void	ft_putdec(int i, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putchar(char c, int *len);
void	ft_putdec_u(unsigned int i, int *len);
void	ft_hex(unsigned int i, int *len, char y);
void	ft_ptr(unsigned long i, int *len);
char	*ft_strchr(const char *s, int c);

#endif
