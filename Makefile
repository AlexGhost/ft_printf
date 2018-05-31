NAME = ft_printf
CFLAG = -Wall -Werror -Wextra
CC = gcc $(CFLAG)
SRC = main.c ft_printf.c
OBJ = $(SRC:.c=.o)
POBJ = $(addprefix obj/,$(OBJ))

all : $(NAME)

$(NAME) : submake $(POBJ)
	@$(CC) $(POBJ) -Llibft -lft -o $(NAME)
	@printf "\r\033[K"
	@echo "\033[32m/------------------------------------\ \\033[0m"
	@echo "\033[32m|------------- $(NAME) crée -------| \\033[0m"
	@echo "\033[32m\------------------------------------/ \\033[0m"

submake :
	@$(MAKE) -C libft/

obj/%.o: %.c
	@printf "\r\033[K""\033[36m - Compilation de \033[0m$<\033[0m"
	@mkdir -p obj
	@$(CC) -o $@ -c $<

clean :
	@$(MAKE) fclean -C libft/
	@rm -rf obj

fclean : clean
	@rm -f $(NAME)
	@echo "\033[31mSuppression - $(NAME)\033[0m"

re : fclean all
