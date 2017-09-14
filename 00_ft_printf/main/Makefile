NAME = main_tests

#CC = gcc
#CC = gcc -Wall -Wextra -Werror
CC = gcc -Wall -Wextra -Werror -g -fsanitize=address

C_FILES = main.c

O_FILES = $(C_FILES:%.c=%.o)

LIBFT_DIR = ../libft
H_DIR = ../includes/

PRINTF_DIR = ..
PRINTF = $(PRINTF_DIR)/libftprintf.a

LIB = -L$(PRINTF_DIR) -lftprintf
INCL = -I $(H_DIR) -I $(LIBFT_DIR)/includes

################################################################################
#################################### RULES #####################################
################################################################################

all : $(NAME)

$(PRINTF) :
	@echo "\033[1;31m-- PRINTF ----------------------\033[0m"
	@make -C $(PRINTF_DIR)
	@echo "\033[1;31m-- OBJECTS ---------------------\033[0m"

$(NAME) : $(PRINTF) $(O_FILES)
	@$(CC) $(O_FILES) -o $@ $(LIB)
	@echo "\033[1;31m-- EXEC ------------------------\033[0m"
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

%.o: %.c
	@$(CC) -o $@ -c $< $(INCL)
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

clean :
	@make clean -C $(PRINTF_DIR)
	@rm -rf $(O_FILES)

fclean : clean
	@make fclean -C $(PRINTF_DIR)
	@rm -rf $(NAME)

re : fclean all

.PHONY : clean all fclean re
