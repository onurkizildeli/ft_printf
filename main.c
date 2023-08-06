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