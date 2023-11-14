/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:54:33 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/14 18:04:49 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printchar(int c);
int		ft_printf(const char *start, ...);
int		ft_printstring(const char *string);
int		ft_printnbr(int num);
int		ft_printpercent(void);
int		ft_printunsnbr(unsigned int c);
int		ft_printhex(unsigned int c, const char format);
int		ft_printptr(unsigned long long ptr);

#endif
