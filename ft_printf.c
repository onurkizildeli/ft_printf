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

int	format(char c, va_list ag)
{
	int	n;

	if (c == 'c')
		n = ft_putchar(va_arg(ag, int));
	else if (c == 's')
		n = ft_putstr(va_arg(ag, char *));
	else if (c == 'd' || c == 'i')
		n = ft_putnbr(va_arg(ag, int));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'x')
		ft_puthex(va_arg(ag, unsigned int ));
	else if (c == 'X')
		ft_puthex(va_arg(ag, unsigned int ));
	else if (c == 'u')
		ft_putunsigned(va_arg(ag, unsigned int));
	//else if (c == 'p')
	//	ft_putptr(va_arg(ag, char *));
	return (n);
}

int	ft_printf(const char *s, ...)
{
	size_t	printed;
	size_t	i;
	va_list	ag;

	i = 0;
	printed = 0;
	va_start(ag, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			i++;
			printed += format(s[i], ag);
			i++;
		}
		else
		{
			printed += ft_putchar(s[i]);
			i++;
		}

	}
	va_end(ag);
	return (printed);

	return (0);
}