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

int main(void)
{

    ft_printf("%s \n", "xdas");

    printf("%i \n", 052);
    printf("%x \n", 896);
    //ft_printf("%c ", 'j');

    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");

    ft_puthex(896);

    int i = 0;
    // while (i <= 80)
    // {
    //     printf("%x, ", i);
    //     i++;
    // }
    
    // while (i <= 80)
    // {
    //     ft_puthex2(i);
    //     printf("; ");
    //     i++;
    // }
    int *p;
    int a;

    a = 0;
    p = &a;
    //ft_putptr(p);
}