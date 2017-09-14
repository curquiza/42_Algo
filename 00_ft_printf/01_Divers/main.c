#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include "../libft/includes/libft.h"

// ordre application du format :
// les signes : flags + ' ' #
// pricision. /!\ attention aux signes + - ' ' 0 ou 0x devant le nombre mais ne pas en tenir compte dans les calculs
// padding + flag 0 (attention si signes + - ' ' ou 0 ou 0x devant) ou flag -

int		main(void)
{
	//ft_putnbr2("size char = ", sizeof(char));
	//ft_putnbr2("size unsigned char = ", sizeof(unsigned char));
	//ft_putnbr2("size wint_t (long char) = ", sizeof(wint_t));
	//ft_putnbr2("size wchar_t = ", sizeof(wchar_t));
	//ft_putnbr2("size short int = ", sizeof(short int));
	//ft_putnbr2("size unsigned short int = ", sizeof(unsigned short int));
	//ft_putnbr2("size int = ", sizeof(int));
	//ft_putnbr2("size long = ", sizeof(long));
	//ft_putnbr2("size long int = ", sizeof(long int));
	//ft_putnbr2("size unsigned int = ", sizeof(unsigned int));
	//ft_putnbr2("size unsigned long int = ", sizeof(unsigned long int));
	//ft_putnbr2("size unsigned long = ", sizeof(unsigned long));
	//ft_putnbr2("size long long int = ", sizeof(long long int));
	//ft_putnbr2("size long long = ", sizeof(long long));
	//ft_putnbr2("size unsigned long long int = ", sizeof(unsigned long long int));
	//ft_putnbr2("size unsigned long long = ", sizeof(unsigned long long));
	//ft_putnbr2("size intmax_t = ", sizeof(intmax_t));
	//ft_putnbr2("size uintmax_t = ", sizeof(uintmax_t));
	//ft_putnbr2("size size_t = ", sizeof(size_t));
	
	//printf(NULL); //segfault
	//ft_putnbr2("ret = ", printf("d", 42)); // warning + affiche d
	//ft_putnbr2("ret = ", printf("%")); // warning + put rien et ret=0
	//ft_putnbr2("ret = ", printf("%s")); // warning + affiche truc random
	//ft_putnbr2("ret = ", printf("%ss", "coco")); // put "cocos"
	//ft_putnbr2("ret = ", printf("%y", "test")); //warning + affiche y
	//ft_putnbr2("ret = ", printf("%y")); //warning + affiche y
	//ft_putnbr2("ret = ", printf("%#2.5hhy")); //warning + affiche " y"
	//ft_putnbr2("ret = ", printf("%1.5hhy")); //warning + affiche "y"
	//ft_putnbr2("ret = ", printf("%2hhy")); //warning + affiche " y"
	//ft_putnbr2("ret = ", printf("%0.4y")); //warning + affiche y
	//ft_putnbr2("ret = ", printf("%y %c", 'a')); // 2 warnings + affiche "y a"
	//ft_putnbr2("ret = ", printf("%@c", 'a')); // warning + affiche "@c"
	//ft_putnbr2("ret = ", printf("hello%c coco %C %c toto", 'b', 350, 'a')); //pas de setloc : put hellob et ret=-1
	//ft_putnbr2("ret = ", printf("coco %C %c toto", 350, 'a')); //pas de setloc : put rien  et ret=-1
	//ft_putnbr2("ret = ", printf("coco%")); //warning + put coco
	//ft_putnbr2("ret = ", printf("%#10.12Z")); //warning + put "         Z"

	// FLAGS
	//ft_putnbr2("ret = ", printf("%-5d", -21)); //put -21 avec 2 blanks à droite
	//ft_putnbr2("ret = ", printf("%-05d", -21)); // warning + put -21 et 2 blanks à droite
	//ft_putnbr2("ret = ", printf("%-d", -21)); //put -21
	//ft_putnbr2("ret = ", printf("%05d", -21)); //put -0021
	//ft_putnbr2("ret = ", printf("%#X", 21)); //put -0021
	//ft_putnbr2("ret = ", printf("%#09X", 21)); //put 0X0000015
	//ft_putnbr2("ret = ", printf("%#-9X", 21)); //put 0X15 et 5 blanks à droite
	//ft_putnbr2("ret = ", printf("%#c", 65)); //warning + put A
	//ft_putnbr2("ret = ", printf("%+s", "coco")); //warning + put "coco"
	//ft_putnbr2("ret = ", printf("%++++d", 21)); //put 21
	//ft_putnbr2("ret = ", printf("%0.3d", 21)); //put 021
	//ft_putnbr2("ret = ", printf("%03d", 21)); //put 021
	//ft_putnbr2("ret = ", printf("%0.d", 21)); //put 21
	//ft_putnbr2("ret = ", printf("%d", 3000000000)); //warning + put -1294967296

	// MINIMUM FIELD WIDTH
	//ft_putnbr2("ret = ", printf("%4d", -42)); //put un blank avant -42
	//ft_putnbr2("ret = ", printf("%4d", 42)); //put 2 blank avant 42
	//ft_putnbr2("ret = ", printf("%1d", -42)); //put -42, osef du 1
	//ft_putnbr2("ret = ", printf("%0d", -42)); //put -42
	//ft_putnbr2("ret = ", printf("%10000000000d", -42)); //put -42 et galere avec tous les blanks
	//ft_putnbr2("ret = ", printf("%10000000000000000000000000000000d", -42)); //put -42 et c'est tout
	//ft_putnbr2("ret = ", printf("%2147683487d", 21)); //put 21 et c'est tout
	//ft_putnbr2("ret = ", printf("%0+6.3d", -42)); //put "  -042"
	//ft_putnbr2("ret = ", printf("%06d", -42)); //put "-00042"
	//ft_putnbr2("ret = ", printf("%0+6d", 42)); //put "+00042"
	//ft_putnbr2("ret = ", printf("%0 6d", 42)); //put " 00042"
	//ft_putnbr2("ret = ", printf("%#6x", 2)); //put "   0x2"
	//ft_putnbr2("ret = ", printf("%0#6x", 2)); //put "0x0002"

	// PRECISION
	//ft_putnbr2("ret = ", printf("%.4d", -42)); //put -0042
	//ft_putnbr2("ret = ", printf("%.1d", -42)); //put -42
	//ft_putnbr2("ret = ", printf("%.d", -42)); //put -42
	//ft_putnbr2("ret = ", printf("%4.d", -42)); //put " -42"
	//ft_putnbr2("ret = ", printf("%4.0d", -42)); //put " -42"
	//ft_putnbr2("ret = ", printf("%.100000000000d", -42)); //put -42 avec la floppée de zero entre le - et le 42
	//ft_putnbr2("ret = ", printf("%4.3d", -42)); //put "-042"
	//ft_putnbr2("ret = ", printf("%#.3x", 2)); //put "0x002"
		
	//MODIFIERS
	//ft_putnbr2("ret = ", printf("%ld", 3000000000)); //warning + put 3000000000
	//ft_putnbr2("ret = ", printf("%ld", 21)); //warning + put 21
	//ft_putnbr2("ret = ", printf("%zf", 21.03)); //warning + put 21.030000 (?)
	//ft_putnbr2("ret = ", printf("%lllld", 0x1111111111111111)); //warning et affiche le nombre correctement
	//ft_putnbr2("ret = ", printf("%hd", 0x1111111111111111)); //warning + put 4369 (ok)
	//ft_putnbr2("ret = ", printf("%hld", 0x1111111111111111)); //warning + put le long en entier
	//ft_putnbr2("ret = ", printf("%lhd", 0x1111111111111111)); //warning + put le long en entier
	//ft_putnbr2("ret = ", printf("%llhhd", 0x1111111111111111)); //warning + put le long en entier
	//ft_putnbr2("ret = ", printf("%hhlld", 0x1111111111111111)); //warning + put le long en entier

	// CONVERSION %
	//ft_putnbr2("ret = ", printf("%%")); // put %
	//ft_putnbr2("ret = ", printf("%%", "coco")); // warning + put %
	//ft_putnbr2("ret = ", printf("%#0.4%")); // put %
	///ft_putnbr2("ret = ", printf("%#5.4%")); // put "    %"
	//ft_putnbr2("ret = ", printf("%#03%")); // put "00%"
	//ft_putnbr2("ret = ", printf("%-#03%")); // put "%  "
	//ft_putnbr2("ret = ", printf("%.0%")); // put "%"
	//ft_putnbr2("ret = ", printf("%.%")); // put "%"
	//ft_putnbr2("ret = ", printf("%%c", 'a')); // warning + put %c
	//ft_putnbr2("ret = ", printf("%0%%c", 'a')); // put %a

	// CONVERSION d
	//char	*s = "coco";
	//ft_putnbr2("ret = ", printf("%d", 42)); // affiche 42
	//ft_putnbr2("ret = ", printf("%d", 'c')); // affiche 99
	//ft_putnbr2("ret = ", printf("%d", "hello")); // warning
	//ft_putnbr2("ret = ", printf("%d", 42.03)); // warning
	//ft_putnbr2("ret = ", printf("%d")); // warning
	//ft_putnbr2("ret = ", printf("%d", s)); // warning
	//ft_putnbr2("ret = ", printf("%d", -42)); // affiche -42
	//ft_putnbr2("ret = ", printf("%d", 3000000000)); //warning
	//ft_putnbr2("ret = ", printf("%d", -3000000000)); //warning + put 1294967296
	//ft_putnbr2("ret = ", printf("yo % d", 30)); // put "yo  30"
	//ft_putnbr2("ret = ", printf("yo % 05d", 30)); // put "yo  0030"
	//ft_putnbr2("ret = ", printf("yo % 05.3d", 30)); // put "yo  0030"
	//ft_putnbr2("ret = ", printf("%.d", 30)); // put "30"
	//ft_putnbr2("ret = ", printf("%6.4d", 30)); // put "  0030"
	//ft_putnbr2("ret = ", printf("%6.4d", -30)); // put "  -030"
	//ft_putnbr2("ret = ", printf("%+d", -0)); // put "+0"
	
	// CONVERSION D
	//ft_putnbr2("ret = ", printf("%.12ld", -3000000000)); //put -003000000000
	
	// CONVERSION u
	//printf("%u", -42); //put 4294967254
	//printf("%u", (unsigned char)-67); //put 189
	//printf("%u", -67); //put 4294967229
	//printf("%lu", -123456789000); //put 4294967229

	// CONVERSION xX
	//printf("%x", -42); //put ffffffd6
	//printf("%x", 2); //put 2 et non 02
	//printf("%#x", 2); //put 0x2 et non 0x02
	//printf("%# 4x", 2); //warning + put 0x2
	//printf("%#5.2x", 2); //put " 0x02"
	//printf("%#06.2x", 2); //put "  0x02"
	//printf("%#06-.2x", 2); //warning + put "0x02  "
	//printf("%#06x", 2); //put "0x0002"
	//printf("%#- 6x", 2); //warning + put "0x02  "
	//printf("%#+6x", 2); //warning + put "  0x02"
	//printf("%#10.6x", 2); //put "  0x000002"

	// CONVERSION oO
	//printf("%o", -42); //put 37777777726
	//printf("%o", 42); //put 52
	//printf("%#o", 0); //put 0
	//printf("%#o", 42); //put 052
	//printf("%0#4o", 42); //put 0052
	//printf("%#10.6o", 2); //put "    000002"
	//printf("%#.1o", 2); //put "02"
	//printf("%#.2o", 2); //put "02"
	//printf("%#.4o", 2); //put "0002"
	//printf("%#.3o", 0); //put "000"

	// CONVERSION p
	//int  a = 41;
	//ft_putnbr2("ret = ", printf("%p", &a));//put "0x7ff..."
	//ft_putnbr2("ret = ", printf("%#p", &a));//warning + put "0x7ff..."
	//ft_putnbr2("ret = ", printf("% p", &a));//warning + put "0x7ff..."
	//ft_putnbr2("ret = ", printf("%+p", &a));//warning + put "0x7ff..."
	//ft_putnbr2("ret = ", printf("%-15p", &a));//put "0x7ff... "
	//ft_putnbr2("ret = ", printf("%015p", &a));//warning + put "0x07ff... " (un 0 en plus)
	//ft_putnbr2("ret = ", printf("%.2p", &a));//warning + put "0x7ff... "
	//ft_putnbr2("ret = ", printf("%.15p", &a));//warning + put "0x0007ff... "
	//ft_putnbr2("ret = ", printf("%20.15p", &a));//warning + put "   0x0007ff..."
	//ft_putnbr2("ret = ", printf("%020.15p", &a));//warning + put "   0x0007ff..." ->flag_zero ignoré
	//ft_putnbr2("ret = ", printf("%p", NULL));//put 0x0
	//ft_putnbr2("ret = ", printf("%p", &main));//put une adresse

	// CONVERSION c
	//ft_putnbr2("ret = ", printf("%c\n", -23));//affiche de la merde et ret=2
	//ft_putnbr2("ret = ", printf("%c\n", 1223));//affiche de la merde et ret=2
	//ft_putnbr2("ret = ", printf("%c titi", '\0'));// affiche " titi" où la blank est le \0
	//ft_putnbr2("ret = ", printf("%.12c\n",'\0'));// warning + put juste de le '\0' 
	//ft_putnbr2("ret = ", printf("%.12c\n",'a'));// warning + put juste de le 'a' 
	//ft_putnbr2("ret = ", printf("%2c\n",'\0'));// put 1 blank puis le \0; ret=3
	//ft_putnbr2("ret = ", printf("%2c\n",'a'));// put 1 blank puis le 'a'; ret=3 
	//ft_putnbr2("ret = ", printf("%02c\n",'a'));// warning + put '0a'; ret=3 
	//ft_putnbr2("ret = ", printf("%0c\n",'a'));// warning + put 'a'; ret=2 
	//ft_putnbr2("ret = ", printf("%+c\n",'a'));// warning + put 'a'; ret=2 
	//ft_putnbr2("ret = ", printf("%-c\n",'a'));// put 'a'; ret=2 
	//ft_putnbr2("ret = ", printf("%-4c\n",'a'));// put 'a   '; ret=2 
	//ft_putnbr2("ret = ", printf("%c\n", 0xff11ff));// put un caractere pourri; ret=2 
	//ft_putnbr2("ret = ", printf("%.0c", 'a'));// warning + put "a"
	//ft_putnbr2("ret = ", printf("%.4c", 'a'));// warning + put "a"
	//ft_putnbr2("ret = ", printf("%.c", 'a'));//put "a"

	// CONVERSION s
	//char	*str;
	//str= ft_strnew(4);
	//strcpy(str, "pif");
	//str[1]= '\0';
	//ft_putnbr2("ret = ", printf("%s", str)); // affiche "p" et ret=1
	//ft_putnbr2("ret = ", printf("%s", NULL)); // affiche "(null)" et ret=6
	//ft_putnbr2("ret = ", printf("titi %s toto", NULL)); // affiche "titi (null) toto" et ret=16
	//ft_putnbr2("ret = ", printf("%7s", "coco")); //put "   coco"
	//ft_putnbr2("ret = ", printf("%-7s", "coco")); //put "coco   "
	//ft_putnbr2("ret = ", printf("%.7s", "coco")); //put "coco"
	//ft_putnbr2("ret = ", printf("%07s", "coco")); //warning + put "000coco"
	//ft_putnbr2("ret = ", printf("%.2s", "coco")); // put "co" ret=2
	//ft_putnbr2("ret = ", printf("%6.2s", "coco")); // put "    co" ret=6
	//ft_putnbr2("ret = ", printf("%06.2s", "coco")); // put "0000co" ret=6
	//ft_putnbr2("ret = ", printf("%-8s", NULL)); // put "(null)  " ret=8
	//ft_putnbr2("ret = ", printf("%+8s", NULL)); // warning + put "  (null)" ret=8
	//ft_putnbr2("ret = ", printf("% 8s", NULL)); // warning + put "  (null)" ret=8
	//ft_putnbr2("ret = ", printf("%#s", NULL)); // warning + put "(null)" ret=8
	//char	s[2];
	//s[0] = 'c';
	//s[1] = 'a';
	//ft_putnbr2("ret = ", printf("%.4s", s)); // put "ca"
	//ft_putnbr2("ret = ", printf("%.0s", "coco")); // put rien et ret=0
	//ft_putnbr2("ret = ", printf("%.s", "coco")); // put rien et ret=0
	

	
	// CONVERSION C (lc)
	//ft_putnbr(MB_CUR_MAX);
	//char	s[4];
	//s[0] = 0xe1;
	//s[1] = 0x88;
	//s[2] = 0xb4;
	//s[3] = '\0';
	//ft_putstr(s);
	//ft_putchar(0xe1);
	//ft_putchar(0x88);
	//ft_putchar(0xb4);
	//ft_putchar(0x0a);

	//setlocale(LC_ALL, "");
	//ft_putnbr2("ret = ", printf("%lc\n", -23));// put rien et ret=-1 avec et sans setloc
	//ft_putnbr2("ret = ", printf("%lc\n", 254));// sans setloc : put de la merde et ret=2; avec : put le char unicode et ret=3
	//ft_putnbr2("ret = ", printf("%lc\n", 1254));// sans setloc : put rien ret=-1; avec : put le char unicode et ret=3
	//ft_putnbr2("ret = ", printf("%lc\n", 0xd800));// avec et sans setloc : put rien et ret=-1
	//ft_putnbr2("ret = ", printf("%lc\n", 0xdb02));// avec et sans setloc : put rien et ret=-1
	//ft_putnbr2("ret = ", printf("%lc\n", 0xdfff));// avec et sans setloc : put rien et ret=-1
	//ft_putnbr2("ret = ", printf("%lc\n", 0xd990));// avec et sans setloc : put rien et ret=-1
	//ft_putnbr2("ret = ", printf("%lc", 1254));// sans setloc : put rien ret=-1; avec : put le char unicode et ret=2
	//ft_putnbr2("ret = ", printf("%.1lc", 1254));// warning + sans setloc : put rien ret=-1; avec : put le char unicode et ret=2
	//ft_putnbr2("ret = ", printf("%.4lc", 1254));// warning + sans setloc : put rien ret=-1; avec : put le char unicode et ret=2
	//ft_putnbr2("ret = ", printf("%4lc", 1254));// sans setloc : put rien ret=-1; avec : put 2 blank puis le char unicode et ret=2
	//ft_putnbr2("ret = ", printf("%04lc", 1254));// warning + sans setloc : put rien ret=-1; avec : put 2 0 puis le char unicode et ret=4
	//ft_putnbr2("ret = ", printf("%-4lc", 1254));// sans setloc : put rien ret=-1; avec : put le char unicode puis 2 blanks et ret=4
	//ft_putnbr2("ret = ", printf("%lc", 0x1e40));//sans : ret=-1 et put rien; avec : put le chat et ret=3 
	//ft_putnbr2("ret = ", printf("%lc", 0x40500));//sans : ret=-1 et put rien; avec : put le chat et ret=4
	//ft_putnbr2("ret = ", printf("%lc", 83)); //avec et sans : put S
	//ft_putnbr2("ret = ", printf("%lc", 254));// sans : put un char non imprimable. avec : put un char unicode.
	//ft_putnbr2("ret = ", printf("%lc", 255));// idem que 254 (mais pas mem char of course)
	//ft_putnbr2("ret = ", printf("%lc", 256)); //sans : put rien et ret=-1; avec : put char unicode
	//ft_putnbr2("ret = ", printf("%.lc", 256)); //sans : put rien et ret=-1; avec : put char unicode -> pas de warning si juste un point
	//ft_putnbr2("ret = ", printf("%.lc", 0xe000)); //sans : -1 ; avec : put et ret=3

	// CONVERSION S (ls)
	//wchar_t		*s = ft_memalloc(sizeof(wchar_t) * 3);
	//setlocale(LC_ALL, "");
	//s[0] = 0x0260;
	//s[1] = 0x0244;
	//s[2] = '\0';
	//ft_putnbr2("ret = ", printf("%ls\n", s));//sans setloc : put rien ret=-1; avec : put les 2 unicodes et ret=5 (pour le \n);
	//ft_putnbr2("ret = ", printf("%5ls", s));//sans setloc : put rien ret=-1; avec : put un blank puis les 2 unicodes et ret=5;
	//ft_putnbr2("ret = ", printf("%05ls", s));//warning + sans setloc : put rien ret=-1; avec : put un 0 puis les 2 unicodes et ret=5
	//ft_putnbr2("ret = ", printf("%-5ls", s));//sans setloc : put rien ret=-1; avec : put les 2 unicodes puis un blank et ret=5
	//ft_putnbr2("ret = ", printf("%.8ls", s));//sans setloc : put rien ret=-1; avec : put les 2  char unicode et ret=4
	//ft_putnbr2("ret = ", printf("%.1ls", s));//sans setloc : put rien ret=-1; avec : put rien et ret=0
	//ft_putnbr2("ret = ", printf("%4.1ls", s));//sans setloc : put rien ret=-1; avec : put 4 blanks et ret=4
	//ft_putnbr2("ret = ", printf("%.3ls", s));//sans setloc : put rien ret=-1; avec : put le 1er char unicode et ret=2
	//s[1] = 0x200000;
	//ft_putnbr2("ret = ", printf("%ls\n", s));//avec et sans setloc : put rien et ret=-1;;
	//s[0] = 83;
	//s[1] = 0x0fff;
	//s[2] = '\0';
	//ft_putnbr2("ret = ", printf("%ls", s));//sans set : put rien et ret=-1

	//int		i = 0;
	//while (*s)
	//{
	//	i++;
	//	s++;
	//}
	//ft_putnbr(i);

	//ft_putnbr2("ret = ", printf("%ls\n", NULL)); //warning + put "(null)"

	return (0);
}
