/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkizilde <mkizilde@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:58:32 by mkizilde          #+#    #+#             */
/*   Updated: 2023/07/31 18:58:32 by mkizilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft_printf.h"

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

//int	ft_printf(const char *s, ...);

// ft_putptr(void *p)
// {
//     int tab[] = p;
//     int i;

//     i = 0;

//     while (i<16)
//     {
//         write(1, &tab[i], 1);
//     }
	
// }

int	main(void)
{
	int a = 3;
	unsigned int b = 90;
	char *str;
	size_t j;
	long long k;
	int *p;
	char s[] = "bu bir char array'dir";

	ft_printf("deneme str p %p", str);
	printf("\n");
	printf("printf str p %p", str);
	printf("\n");
	// ft_printf("deneme %p", k);
	// printf("\n");
	// printf("printf %p", k);
	// printf("\n");
	ft_printf("deneme a adres %p \n\n", &a);
	printf("\n");
	printf("printf a adres %p", &a);
	printf("\n");
	ft_printf("deneme %%");
	printf("\n");
	ft_printf("deneme %s", "hede");
	printf("\n");
	ft_printf("deneme %s", s);
	printf("\n");
	ft_printf("deneme complex test s = %s, s(p) = %p , int a = %d, unsigned b = %u", s, s, a, b);
	printf("\n");
}





////////////////////*!YEDEK FONKSİYONLAR*////////////////////

/*

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


size_t	ft_putptr(void *p)
{
	int		n;
	int		i;
	char	s[16];
	char	hex[16];

	n = 0;
	i = 0;
	s = (char *)p;
	hex[16] = "0123456789abcdef";
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nb != 0)
	{
		s[i] = hex[nb % 16];
		nb /= 16;
		n++;
		i++;
	}
	while (i--)
		write(1, &s[i], 1);
	return (n);
}



size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
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

size_t ft_putunsigned(unsigned int nb)
{
    size_t n = 0;
    char *s;
    int i = 0;

    if (nb == 0)
    {
        return ft_putchar('0');
    }

    // Count the number of digits in nb
    unsigned int temp = nb;
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }

    // Dynamically allocate memory for the character array
    s = (char *)malloc(n + 1);
    if (!s)
        return 0;

    // Store the digits in the character array
    while (nb != 0)
    {
        s[i++] = (nb % 10) + '0';
        nb /= 10;
    }

    // Print the digits in reverse order
    while (i--)
        write(1, &s[i], 1);

    free(s);
    return n;
}

*/