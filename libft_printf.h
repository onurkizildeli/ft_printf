#ifndef LIBFT_PRINTF_H
#define LIBFT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_printf(const char *s, ...);
void	ft_putstrl(char *s, size_t len);
void	ft_putchar(char c);
size_t	ft_strlen(char *s);
void	ft_putstr(char *s);
void    ft_putnbr(size_t nb);
void	ft_puthex(int nb);

#endif