/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:54:33 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/06 16:04:13 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printchar(int c);
int	ft_format(va_list args,const char format);
int ft_printstring(const char *string);
int	ft_printnbr(int num);
int	ft_printpercent();
int	ft_printunsnbr(unsigned int c);

#endif
