#ifndef	LIBFT_PRINTF_H
#define LIBFT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_printf(const char *s, ...);
void	ft_putstrl(char *s, size_t len);
size_t	ft_putchar(char c);
size_t	ft_strlen(char *s);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(int nb);
size_t	ft_puthex(unsigned int nb);
size_t	ft_putunsigned(unsigned int nb);
size_t	ft_putptr(void *p);
//size_t	ft_putnbr2(int nb);

#endif