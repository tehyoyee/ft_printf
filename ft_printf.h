/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:19:25 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/27 16:04:54 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
char	*ft_dec_to_hex(unsigned long num, int type);
int		ft_format_p(void *ptr);
int		ft_format_u(unsigned int nbr);
int		ft_format_x(unsigned long x);
int		ft_format_lx(unsigned long x);
int		ft_digit_count(unsigned int x);
int		ft_format_c(int c);
int		ft_format_s(char *s);
int		ft_format_d(long d);
char	*ft_dec_to_u(unsigned int nbr);
int		ft_printf(const char *str, ...);

#endif
