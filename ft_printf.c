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

void	*format(char c, va_list ag)
{
	if (c == 'c')
		ft_putchar(va_arg(ag, int));
	else if (c == 's')
		ft_putstr(va_arg(ag, char *));
	else if (c == 'd')
		ft_putnbr(va_arg(ag, int));
	// else if (c == 'p')
	// 	ft_putstr(va_arg(ag, char *));
	// else if (c == 'i')
	// 	ft_putstr(va_arg(ag, char *));
	// else if (c == 'u')
	// 	ft_putstr(va_arg(ag, char *));
	// else if (c == 'x')
	// 	ft_putstr(va_arg(ag, char *));
	// else if (c == 'X')
	// 	ft_putstr(va_arg(ag, char *));
	// else if (c == '%')
	// 	ft_putstr(va_arg(ag, char *));
}

int	ft_printf(const char *s, ...)
{
	size_t	size;
	size_t	i;
	va_list	ag;

	i = 0;
	va_start(ag, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			format(s[i + 1], ag);
			i++;
		}
		else if (s[i] != '%')
		{
			ft_putchar(s[i]);
			i++;
		}
		va_end(ag);
	}

	return (0);
}