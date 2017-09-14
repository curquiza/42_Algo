NAME = libftprintf.a

#CC = gcc
CC = gcc -Wall -Wextra -Werror
#CC = gcc -Wall -Wextra -Werror -g -fsanitize=address

C_DIR = srcs
C_FILES = $(addprefix $(C_DIR)/, \
		  arg_lst_func.c \
		  parsing.c \
		  parsing_tools.c \
		  numeric_to_str.c \
		  conv_x_bigx.c \
		  conv_o_bigo.c \
		  conv_u_bigu.c \
		  conv_d_i_bigd.c \
		  conv_p.c \
		  conv_c.c \
		  conv_bigc.c \
		  conv_s.c \
		  conv_bigs.c \
		  conv_percent.c \
		  conv_b.c \
		  sign_flags.c \
		  precision.c \
		  padding.c \
		  display.c \
		  ft_printf.c) 

LIBFT_DIR = libft
C_FILES_LIBFT = $(addprefix $(LIBFT_DIR)/srcs/, \
				ft_bzero.c \
				ft_exit.c \
				ft_isdigit.c \
				ft_memalloc.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putendl2_fd.c \
				ft_putnbr.c \
				ft_putnbr2.c \
				ft_putnbr_endl.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_strchr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_strncpy.c \
				ft_strnew.c \
				ft_strsub.c)

O_DIR = objs
O_FILES = $(C_FILES:$(C_DIR)/%.c=$(O_DIR)/%.o)
O_FILES_LIBFT = $(C_FILES_LIBFT:$(LIBFT_DIR)/srcs/%.c=$(O_DIR)/%.o)

H_DIR = includes/

INCL = -I $(H_DIR) -I $(LIBFT_DIR)/includes

################################################################################
#################################### RULES #####################################
################################################################################

all : $(NAME)

$(NAME) : $(O_FILES) $(O_FILES_LIBFT)
	@ar rc $@ $(O_FILES) $(O_FILES_LIBFT)
	@ranlib $@
	@echo "\033[1;31m-- LIB -------------------------\033[0m"
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

$(O_DIR)/%.o: $(C_DIR)/%.c $(H_DIR)
	@mkdir -p $(O_DIR)
	@$(CC) -o $@ -c $< $(INCL)
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

$(O_DIR)/%.o: $(LIBFT_DIR)/srcs/%.c 
	@mkdir -p $(O_DIR)
	@$(CC) -o $@ -c $< $(INCL)

run_curquitest :
	@make -C curquitest
	@curquitest/curquitest

clean :
	@rm -rf $(O_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : clean all fclean re
