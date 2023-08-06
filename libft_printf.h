#ifndef	LIBFT_PRINTF_H
#define LIBFT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_printf(const char *s, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(int nb);
size_t	ft_puthex(unsigned int nb);
size_t	ft_puthex_c(unsigned int nb);
size_t	ft_putunsigned(unsigned int nb);
size_t	ft_putptr(void *p);

#endif