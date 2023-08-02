/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkizilde <mkizilde@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 03:05:01 by mkizilde          #+#    #+#             */
/*   Updated: 2023/07/29 03:05:01 by mkizilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*!SUBJECT
ft_printf fonksiyonunu prototipi int ft_printf(const char *, ...); şeklinde
olmalıdır.
•libc kütüphanesinde bulunan printf fonksiyonunu yeniden yazmalısınız
•Yazacağınız fonksiyon gerçek printf gibi buffer yönetimi yapmamalıdır.
•Fonksiyonunuz şu dönüşümü yapmalıdır: cspdiuxX%
•Fonksiyonunuz gerçek printf ile karşılaştırılacaktır
•Kütüphanenizi oluşturmak için ar komutunu kullanmalısınız,libtool komutu kul-
lanımı yasaklanmıştır.

Gerekli dönüşümler hakkında kısa açıklamalar:
•%c tek bir karakter yazdırır.
•%s bir karakter dizisi yazdırır.
•%p Void * pointer argümanını hexadecimal biçiminde yazdırır.
•%d 10 tabanında decimal sayı yazdırır.
•%i 10 tabanında tam sayı yazdırır.
•%u 10 tabanında işaretsiz decimal sayı yazdırır.
•%x hexadecimal sayıyı (16 tabanında) küçük harfler ile yazdırır.
•%X hexadecimal sayıyı (16 tabanında) büyük harfler ile yazdırır.
•%% yüzde işareti yazdırır.


!!!! Daha fazlası için : man 3 printf / man 3 stdarg

*/


#include "libft_printf.h"

// size_t	ft_strlen(char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *s)
{
	size_t	i;
	size_t	n;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	n = i;
	return (n);
}

void	ft_putstrl(char *s, size_t len)
{
	int	i;

	i = 0;
	while (s)
	{
		write(1, &s[i], len);
		i++;
	}
}

size_t	ft_putnbr(size_t nb)
{
	size_t	n;

	n = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
		n++;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + '0';
		write(1, &nb, 1);
		n++;
	}
	return (n);
}

size_t	ft_puthex(int nb)
{
	size_t	n;
	char	hex[16] = "0123456789abcdef";
	int		i;

	n = 0;
	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_puthex(nb);
		n++;
	}
	else if (nb > 15)
	{
		ft_puthex(nb / 16);
		ft_puthex(nb % 16);
	}
	else
	{
		write(1, &hex[nb], 1);
		n++;
	}
	return (n);
}

size_t	ft_putnbr2(int nb)
{
	int		n;
	int		i;
	char	s[16];

	n = 0;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		n++;
	}
	while (nb != 0)
	{
		s[i] = (nb % 10) + '0';
		nb /= 10;
		n++;
		i++;
	}
	while (i--)
		write(1, &s[i], 1);
	return (n);
}
