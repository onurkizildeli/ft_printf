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

void	puthex2(int nb)
{
	char	hex[16] = "0123456789abcdef";
	int		i;

	
	i = 0;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 15)
	{
		ft_putnbr(nb / 16);
		ft_putnbr(nb % 16);
	}
	else
	{
		//nb = hex[nb] + '';
		write(1, &hex[nb], 1);
	}
}

int main(void)
{

    // char c1 = 'a';
    // char c2[]= "a";
    // char s1[] = "";
    // char s2[] = "1234";
    // int a = -9876;
    // //long b = 7282462846646;
    // //int *p = 3131;
    // unsigned int c = 9876;
    // printf("%c \n", c1);
    // printf("%s \n", c2);
    // printf("%s \n", s1);
    // printf("%s \n", s2);
    // printf("%d \n", a);
    // //printf("%u \n", b);
    // //printf();
    // printf("%% \n");
    ft_printf("%s \n", "xdas");

    printf("%i \n", 052);
    printf("%x \n", 57);
    //ft_printf("%c ", 'j');

    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");

    puthex2(57);
}