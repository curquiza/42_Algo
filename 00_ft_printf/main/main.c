#include "printf.h"
#include <stdio.h>
#include <locale.h>


void	ft_recup_arg(char *s, va_list arg)
{
	void		*content;
	int			i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'c')
		{
			content = ft_memalloc(sizeof(char));
			*(char *)content = va_arg(arg, int);
			ft_putstr("le char = ");
			ft_putchar(*(char *)content);
			ft_putendl("");
		}
		else if (s[i] == 'd')
		{
			content = ft_memalloc(sizeof(int));
			*(int *)content = va_arg(arg, int);
			ft_putnbr2("le int = ", *(int *)content);
		}
		else if (s[i] == 's')
		{
			content = va_arg(arg, char *);
			ft_putendl2_fd("la string = ", content, 1);
		}
		else if (s[i] == 'p')
		{
			content = va_arg(arg, void *);
			ft_putendl2_fd("l'adresse = ", ft_num_to_str((unsigned long long int)va_arg(arg, void *), LITTLE_HEXA_BASE), 1);
		}
		i++;
	}
}

int		ft_printf2(char *s, ...)
{
	va_list		arg;

	va_start(arg, s);
	ft_recup_arg(s, arg);
	va_end(arg);
	return (0);
}

int		main(void)
{
	//ft_printf("%04%");
	//ft_printf("%%");
	//ft_printf("%.0%");
	//ft_printf("%-2%");

	//signed char c = 'a';
	//ft_printf("%hhd", c);
	//printf("%hhd", c);
	//short d = 31000;
	//ft_printf("%hd", d);
	//printf("%hd", d);
	//ft_printf("%2d", 0);
	//ft_printf("%d et %i", 12, 22);
	//ft_printf("%4d", 21);
	//ft_printf("%1d", 21);
	//ft_printf("%5d", -21);
	//ft_printf("%05d", -21);
	//ft_printf("%0-5d", -21);
	//ft_printf("%2d", -21);
	//ft_printf("%2ld", 0xff11ff11ff);
	//printf("%2ld\n", 0xff11ff11ff);
	//ft_printf("%2ld", 0xff1111ff11ff11ff);
	//printf("%2ld\n", 0xff1111ff11ff11ff);
	//ft_printf("%2.d");
	//ft_printf("%2.1222d");
	//ft_printf("%######2d");
	//ft_printf("%2147683487d", 21);
	//ft_printf("%2147683487", 21);
	//ft_printf("%2.d", 42);
	//ft_printf("%2.0d", 42);
	//ft_printf("%6.4d", 42);
	//ft_printf("%6.4d", -42);
	//ft_printf("%+6.4d", 42);
	//ft_printf("% 6.4d", 42);
	//ft_printf("%+ 6.4d", 42);
	//ft_putnbr2("ret =", ft_printf("%20.ld et %.4hhi !", 0x11ffaa147, (signed char)-8));
	//ft_putnbr2("ret =", printf("%20.ld et %.4hhi !", 0x11ffaa147, (signed char)-8));
	//ft_printf("%20.ld et %.4hhi !", 0x11ffaa147, (signed char)-8);
	//ft_putendl("");
	//printf("%20.ld et %.4hhi !", 0x11ffaa147, (signed char)-8);
	//ft_putnbr2("ret = ", printf("%.d", 0));
	//ft_putnbr2("ret = ", printf("%+.d", 0));
	
	//ft_printf("%s et %d", "coco", 12);
	//ft_printf("%s", "c\0oco");
	//ft_printf("%.1s", "coca");
	//ft_printf("%.s", "coca");
	//ft_printf("%-5s", "coca");
	//ft_printf("%-3s", "coca");
	//ft_printf("%3s", "coca");
	//ft_printf("%5s", "coca");
	//ft_printf("%06s", "coca");

	//int a = 12;
	//ft_printf("%p", &a);
	//ft_printf("%017p", &a);
	//ft_printf("%17.16p", &a);
	//printf("%p", &a);
	//ft_printf("%p", NULL);
	
	//ft_printf("%c", 0xff11ff);
	//ft_printf("%c", 65);
	
	//ft_printf("%o", 014);
	//ft_printf("%o", -14);
	//printf("%o", -14);
	//ft_printf("%#o", 014);
	//ft_printf("%0#8o", 014);
	//ft_printf("%0#.4o", 014);
	//ft_printf("%#8.4O\n", 014);
	//printf("%#8.4O\n", 014);
	//ft_putnbr2("ret = ", printf("%#o", -896));
	//ft_putnbr2("ret = ", ft_printf("%#o", -896));
	//ft_putnbr2("ret = ", printf("t%04.2o%#2oet %#-8.3o titi", 0, 0, 0));
	//ft_putnbr2("ret = ", ft_printf("t%04.2o%#2oet %#-8.3o titi", 0, 0, 0));
	//ft_putnbr2("ret = ", printf("%#-8.3o", 0));
	//ft_putnbr2("ret = ", ft_printf("%#-8.3o", 0));
	//ft_putnbr2("ret = ", printf("%.o", 0));
	//ft_putnbr2("ret = ", ft_printf("%#.o", 0));
	
	//ft_printf("%u", -14);
	//printf("%u", -14);
	//ft_printf("%04u", 14);
	//ft_printf("%0-4u", 14);
	//ft_printf("%-4.3u", 14);
	//ft_printf("%-4.u", 14);
	//ft_putnbr2("ret = ", printf("%llu", (unsigned long long)-12345612220));
	//ft_putnbr2("ret = ", ft_printf("%llu", (unsigned long long)-12345612220));
	//ft_putnbr2("ret = ", printf("%hhu", (unsigned char)-12345612220));
	//ft_putnbr2("ret = ", ft_printf("%hhu", (unsigned char)-12345612220));
	//ft_putnbr2("ret = ", printf("%.u", 0));
	
	//ft_printf("%X", 0xff11ff);
	//ft_printf("%x", -42);
	//printf("%x", -42);
	//ft_printf("%#.4x", 0x42);
	//ft_printf("%#8.4x", 0x42);
	//ft_printf("%#-8.4x", 0x42);
	//ft_printf("%#08.4x", 0x42);
	//ft_putnbr2("ret = ", printf("%#X", 0));
	//ft_putnbr2("ret = ", ft_printf("%#X", 0));
	//ft_putnbr2("ret = ", printf("%#X", 0xff7744));
	//ft_putnbr2("ret = ", ft_printf("%#X", 0xff7744));
	//ft_putnbr2("ret = ", printf("%#7.5X", 0xab));
	//ft_putnbr2("ret = ", ft_printf("%#7.5X", 0xab));
	//ft_putnbr2("ret = ", printf("%.x", 0));
	//ft_putnbr2("ret = ", printf("%.1x", 0));
	//ft_putnbr2("ret = ", ft_printf("%.x", 0));
	//ft_putnbr2("ret = ", printf("%#.x", 0));

	
	//ft_printf("%c", 'b');
	//ft_printf("%4c", 'b');
	//ft_printf("%04c", 'b');
	//ft_printf("%0-4c", 'b');
	//ft_printf("%0-4c", '\0');
	//ft_printf("%%ccc");

	//setlocale(LC_ALL, "");
	//ft_printf("%C", 0x244);
	//ft_printf("%C", 0x3fff);
	//ft_printf("%C", 0x10ffff);
	//ft_printf("%4C", 0x244);
	//ft_printf("%04C", 0x244);

	//wchar_t	s[3];
	//setlocale(LC_ALL, "");
	//s[0] = 0x0202;
	//s[1] = 0x024A;
	//s[2] = '\0';
	//ft_putnbr2("ret = ", printf("%ls", s));
	//ft_printf("%ls", s);
	//ft_printf("%6ls", s);
	//ft_printf("%.3ls", s);
	//ft_printf("%.5ls", s);
	//ft_printf("%6.3ls", s);
	//s[1] = 0xffffffff;
	//ft_printf("%ls\n", s);
	//wchar_t	s[4];
	//s[0] = 'S';
	//s[1] = 256;
	//s[2] = 'u';
	//s[3] = '\0';
	//ft_putnbr2("ret = ", printf("%.1ls", s));
	//ft_putnbr2("ret = ", ft_printf("%.1ls", s));

	//ft_printf("coco et %d et %s et titi", 21, "mimimi");
	//ft_printf("coco et %+3d et %.4s et titi", 21, "mimimi");
	//while (1);
	//ft_putnbr2("\nret = ", ft_printf("%d coco %C", 21, 0xffffffffff));
	//ft_putnbr2("ret = ", printf("%S", L"我是一只猫。"));
	//ft_putnbr2("ret = ", ft_printf("%S", L"我是一只猫。"));

	// CONVERSION b
	//ft_printf("%b", 8);
	//ft_printf("%-21b", 0x4abb);
	//ft_printf("%b", 0x4a440);
	//ft_printf("%lb\n", -12345678900);
	//ft_printf("%lb\n", (unsigned long)-12345678900);

	return (0);
}
