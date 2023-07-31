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

int	ft_printf(const char *s, ...)
{
	size_t	size;
	size_t	i;
	va_list	ag;

	i = 0;


	va_start(ag, s);
	while (s[i])
	{

		if (s[i] == '%')
		{
			if (s[i + 1] == 'c')
			{
				ft_putchar(s[i + 1]);
				char args = va_arg(ag, int);
				i++;
			}

			// if (s[i + 1] == "s")
			// {
			// 	ft_putstr(s);
			// 	va_arg()
			// }

			// if (s[i + 1] == "p")
			// {
			// 	ft_putstr(s);
			// 	va_arg()
			// }

			// if (s[i + 1] == "d")
			// {
			// 	ft_putstr(s);
			// 	va_arg()
			// }
			
			// if (s[i + 1] == "i")
			// if (s[i + 1] == "u")
			// if (s[i + 1] == "x")
			// if (s[i + 1] == "X")
			// if (s[i + 1] == "%")
		}

		//i++;

		// else
		// {
		// 	size = ft_strlen(s);
		// 	ft_putstr(s);
		// }
	}
	va_end(ag);

	return 0;
}