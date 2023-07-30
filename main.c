#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

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

int main(void)
{
    char c1 = 'a';
    char c2= "a";
    char s1[] = "";
    char s2[] = "1234";
    int a = -9876;
    //long b = 7282462846646;
    int *p = 3131;
    unsigned int c = 9876;
    printf("%c \n", c1);
    printf("%c \n", c2);
    printf("%s \n", s1);
    printf("%s \n", s2);
    printf("%d \n", a);
    //printf("%u \n", b);
    printf("%p \n", p);
    printf("%% \n", p);
}